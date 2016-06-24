#ifndef danceofdeath
#define danceofdeath
#include "Enemigo.h"
#include "Mapa.h"
#include "Personaje.h"
CEnemigo::CEnemigo()
{
	
	rango=false;
	muerto=false;
	pos = 0;
}


CEnemigo::~CEnemigo(){
}
bool CEnemigo::ColisionRango(int JposX, int JposY) {
	if (pos == 1) {
		if (JposX < 270+325&&JposY<515) {
			rango = true;
		}
	}
	if (pos == 2) {
		if (JposX > 370 + 325 && JposY<515) {
			rango = true;
		}
	}
	if (pos == 3) {
		if (JposX < 270 + 325 && JposY+50>515) {
			rango = true;
		}
	}
	if (pos == 4) {
		if (JposX > 370 + 325 && JposY+50>515) {
			rango = true;
		}
	}
	return rango;
}

long long CEnemigo::experiencia( ){
	return exp;
}
void CEnemigo::Es_Atacado(long long daño) {
	if (rand() % 100 > evasion) {
		vida = vida - daño;
	}
	if (vida <= 0) {
		muerto = true;
		ataque = 0;

	}
}
void CEnemigo::generar_enemigo(int x, int y,int lugar,int minimo, int maximo, int semilla) {
	srand(semilla);
	tipo = (rand() % (maximo - minimo)) + minimo;
	item = rand() % 2;
	pos = lugar;
	evasion = 2 * (tipo + 1);
	vida = 20 * (tipo + 1);
	ataque = 5 * (tipo + 1);
	exp = 10 * (tipo + 1);
	vida = vida*(x+1)*(y+1);
	ataque = ataque*(x + 1)*(y + 1);
}
long long CEnemigo::atacar(){
//ColisionRango(JposX, JposY);
	if (rango == true) {
		return ataque;
	}
	else {
		return 0;
	}
}
int CEnemigo::gettipo() {
	return tipo;
}
bool CEnemigo::getmuerto() {
	return muerto;
}
int CEnemigo::getpos(){
	return pos;
}
bool CEnemigo::getitem() {
	if (item == 1) {
		return true;
	}
	else {
		return false;
	}
}
#endif