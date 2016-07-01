#ifndef __AVLTREE_H__
#define __AVLTREE_H__

#include <functional>
#include <iostream>

using namespace std;

template <typename T> class ArbolAVL {
	struct Nodo {
		T elem;
		Nodo* izq;
		Nodo* der;
		int altura;
		Nodo(T elem = nullptr, Nodo* izq = nullptr, Nodo* der = nullptr)
			: elem(elem), izq(izq), der(der) {
			altura = 0;
		}
		int alturaHD() { return der == nullptr ? -1 : der->altura; }
		int alturaHI() { return izq == nullptr ? -1 : izq->altura; }
		int alturaHM() { return alturaHD() > alturaHI() ? alturaHD() : alturaHI(); }
	};
	Nodo* raiz;
	function<void(T)> procesar;
	function<int(T, T)> comparar;
public:
	ArbolAVL(function<void(T)> procesar, function<int(T, T)> comparar)
		: procesar(procesar), comparar(comparar) {
		raiz = nullptr;
		dummy = nullptr;
	}
	~ArbolAVL() {}

	void insertar(T e) {
		_insertar(raiz, e);
	}
	bool eliminar(T e) {
		Nodo*& aux = _buscar(raiz, e);
		if (aux == nullptr) return false;
		Nodo* reemplazo = _mayor(aux->izq);
		if (reemplazo == nullptr)
			reemplazo = _menor(aux->der);
		if (reemplazo == nullptr) {
			delete aux;
			aux = nullptr;
		}
		else {
			reemplazo->izq = aux->izq;
			reemplazo->der = aux->der;
			Nodo* aux2 = aux;
			aux = reemplazo;
			delete aux2;
		}
		return true;
	}
	T buscar(T e) {
		Nodo* obj = _buscar(raiz, e);
		if (obj == nullptr) return nullptr;
		return obj->elem;
	}
	int altura() {
		return raiz == nullptr ? -1 : raiz->altura;
	}

	void preOrden() { _preOrden(raiz); }
	void enOrden() { _enOrden(raiz); }
	void postOrden() { _postOrden(raiz); }

private:
	Nodo* dummy;
	Nodo*& _buscar(Nodo*& nodo, T e) {
		if (nodo == nullptr) return dummy;
		if (comparar(nodo->elem, e) == 0) return nodo;
		if (comparar(nodo->elem, e) < 0) return _buscar(nodo->der, e);
		return _buscar(nodo->izq, e);
	}
	Nodo* _mayor(Nodo*& nodo) {
		if (nodo == nullptr) return dummy;
		if (nodo->der != nullptr) return _mayor(nodo->der);
		Nodo* aux = nodo;
		nodo = aux->izq;
		aux->izq = nullptr;
		return aux;
	}
	Nodo* _menor(Nodo*& nodo) {
		if (nodo == nullptr) return nullptr;
		if (nodo->izq != nullptr) return _menor(nodo->izq);
		Nodo* aux = nodo;
		nodo = aux->der;
		aux->der = nullptr;
		return aux;
	}
	void _rotarHorario(Nodo* x, Nodo*& y) {
		Nodo* aux = x->der;
		x->der = y;
		y->izq = aux;
		y->altura = y->alturaHM() + 1;
		y = x;
		y->altura = y->alturaHM() + 1;
	}
	void _rotarAntihorario(Nodo*& x, Nodo* y) {
		Nodo* aux = y->izq;
		y->izq = x;
		x->der = aux;
		x->altura = x->alturaHM() + 1;
		x = y;
		x->altura = x->alturaHM() + 1;
	}
	void _insertar(Nodo*& nodo, T e) {
		if (nodo == nullptr) {
			nodo = new Nodo(e);
		}
		else if (comparar(e, nodo->elem) > 0) {
			_insertar(nodo->der, e);
		}
		else { // ignorar iguales: if (camparar(e, nodo->elem) < 0) { 
			_insertar(nodo->izq, e);
		}
		int alturahi = nodo->alturaHI();
		int alturahd = nodo->alturaHD();
		int difAlturas = alturahi - alturahd;
		if (difAlturas > 1) { // pesado a la izquierda
			if (nodo->izq->alturaHI() < nodo->izq->alturaHD()) {
				_rotarAntihorario(nodo->izq, nodo->izq->der);
			}
			_rotarHorario(nodo->izq, nodo);
		}
		else if (difAlturas < -1) { // pesado a la derecha
			if (nodo->der->alturaHI() > nodo->der->alturaHD()) {
				_rotarHorario(nodo->der->izq, nodo->der);
			}
			_rotarAntihorario(nodo, nodo->der);
		}
		nodo->altura = nodo->alturaHM() + 1;
	}
	void _preOrden(Nodo* nodo) {
		if (nodo == nullptr) return;
		procesar(nodo->elem);
		_preOrden(nodo->izq);
		_preOrden(nodo->der);
	}
	void _enOrden(Nodo* nodo) {
		if (nodo == nullptr) return;
		_enOrden(nodo->izq);
		procesar(nodo->elem);
		_enOrden(nodo->der);
	}
	void _postOrden(Nodo* nodo) {
		if (nodo == nullptr) return;
		_postOrden(nodo->izq);
		_postOrden(nodo->der);
		procesar(nodo->elem);
	}
};

#endif