#include "MyList.h"
#include "Node.cpp"
#include "Node.h"

#include <iostream>

using namespace std;

template <typename T>
CMyList<T>::CMyList()
{
	begin = NULL;
}

template <typename T>
CMyList<T>::~CMyList()
{
	begin = NULL;
}

template <typename T>
CNode<T>* CMyList<T>::getBegin(){
	return begin;
}

template <typename T>
void CMyList<T>::setBegin(CNode<T>* begin){
	this->begin = begin;
}

template <typename T>
bool CMyList<T>::addAtBegin(T value){
	CNode<T> *node = new CNode<T>();
	node->setData(value);
	if (begin == NULL)
		begin = node;
	else {
		node->setNext(begin);
		begin = node;
	}

	return true;
}
template <typename T>
bool CMyList<T>::deleteByPosition(int pos) {
	CNode<T> *ant = begin;
	CNode<T> *aux = begin;
	if (pos == 0) {
		if (aux == NULL)
			return false;
		begin = aux->getNext();
		delete aux;
	} else {
		for (int i = 0; i < pos - 1; i++) {
			if (ant == NULL)
				return false;
			ant = ant->getNext();
		}
			
		aux = ant;
		aux = aux->getNext();
		if (aux == NULL)
			return false;
		ant->setNext(aux->getNext()); 
		delete aux;
	}	
	return true;
}


//int main() {
//	int value;
//	CMyList<int> *list = new CMyList<int>();
//
//	int op;
//	cout << "Bienvenido:" << endl;
//	cout << "Que desea hacer?" << endl 
//		<< "0: agregar elementos al inicio " << endl
//		<< "1: Buscar un elemento " << endl 
//		<< "2: Eliminar un elemento al inicio " << endl 
//		<< "3: Eliminar por posición " << endl
//		<< "9: Mostrar Lista " << endl << "10: salir " << endl;
//	cin >> op;
//
//	while (op != 10) {
//		switch (op) {
//			case 0: {
//				do {
//					cout << "Ingrese su valor por favor (-1 para finalizar): ";
//					cin >> value;
//
//					if (value != -1) {
//						list->addAtBegin(value);
//						list->print();
//					}
//
//
//				} while (value != -1);
//			}break;
//			case 1: {
//				int s;
//				cout << "Valor a buscar: ";
//				cin >> s;
//				int pos = list->search(s);
//				cout << "Encontrado en posicion: " << pos << endl;
//				cout << endl;
//				
//			} break;
//			case 2: {
//				list->deleteAtBegin();
//				cout << "Valor eliminado al inicio exitoso " << endl;
//
//			} break;
//			case 3: {
//				int del;
//				cout << "Ingrese la posición que desea eliminar";
//				cin >> del;
//				
//				bool success = list->deleteByPosition(del);
//				cout << "Estado de la posicion " << del << " : " << success << endl;
//
//			} break;
//			case 9: {
//				cout << endl;
//				list->print();
//			} break;
//		}
//		//system("cls");
//		cout << endl;
//		cout << "Bienvenido:" << endl;
//		cout << "Que desea hacer?" << endl
//			<< "0: agregar elementos al inicio " << endl
//			<< "1: Buscar un elemento " << endl
//			<< "2: Eliminar un elemento al inicio " << endl
//			<< "3: Eliminar por posición " << endl
//			<< "9: Mostrar Lista " << endl << "10: salir " << endl;
//		cin >> op;
//	}
//
//
//
//	system("pause");
//	return 0;
//}