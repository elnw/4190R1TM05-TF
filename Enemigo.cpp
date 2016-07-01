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
	if (pos == 0) {
		if (JposX <250&&JposY<200) {
			rango = true;
		}
	}
	if (pos == 1) {
		if (JposX > 250 && JposX < 425 && JposY<200) {
			rango = true;
		}
	}
	if (pos == 2) {
		if (JposX < 600 && JposX > 425 && JposY<200) {
			rango = true;
		}
	}
	if (pos == 3) {
		if (JposX < 775 && JposX >600 && JposY<200) {
			rango = true;
		}
	}
	if (pos == 4) {
		if (JposX <950 && JposX > 775 && JposY<200) {
			rango = true;
		}
	}
	if (pos == 5) {
		if (JposX < 1125 && JposX >950 && JposY<200) {
			rango = true;
		}
	}
	if (pos == 6) {
		if ( JposX > 1125 && JposY<200) {
			rango = true;
		}
	}
	if (pos == 7) {
		if (JposX <250 && JposY>200) {
			rango = true;
		}
	}
		if (pos == 8) {
			if (JposX > 250 && JposX < 425 && JposY>200) {
				rango = true;
			}
		}

		if (pos == 9) {
			if (JposX < 600 && JposX > 425 && JposY>200) {
				rango = true;
			}
		}
		if (pos ==10) {
			if (JposX < 775 && JposX >600 && JposY>200) {
				rango = true;
			}
		}
		if (pos == 11) {
			if (JposX <950 && JposX > 775 && JposY>200) {
				rango = true;
			}
		}
		if (pos == 12) {
			if (JposX < 1125 && JposX >950 && JposY>200) {
				rango = true;
			}
		}
		if (pos == 13) {
			if (JposX > 1125 && JposY>200) {
				rango = true;
			}
		}
	
		
	return rango;
}

long long CEnemigo::experiencia( ){
	int aux = exp;
	this->exp = 0;
	return aux;
}
void CEnemigo::Es_Atacado(long long daño) {
	if (rand() % 100 > evasion) {
		this->vida = this->vida - daño;
	}
	if (vida <= 0) {
		this->muerto = true;
		this->ataque = 0;

	}
}
void CEnemigo::generar_enemigo(int x, int y,int lugar,int minimo, int maximo, int semilla) {
	srand(semilla);
	tipo = (rand() % (maximo - minimo)) + minimo;
	item = rand() % 2;
	pos = lugar;
	evasion = 2 * (tipo + 1);
	vida = 20 * (tipo + 1);
	ataque = 3 * (tipo + 1);
	exp = 10 * (tipo + 1);
	vida = vida*(x+1)*(y+1);
	ataque = ataque*(x + 1)*(y + 1);
	semilla += 1;
}
long long CEnemigo::atacar(){
//ColisionRango(JposX, JposY);
		return ataque;
	
	
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