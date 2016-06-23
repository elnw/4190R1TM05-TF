
#pragma once
#include "Mapa.h"

class CEnemigo {
protected:
	long long vida;
	long long ataque;
	bool muerto;
	int evasion;
	bool rango;
	int tipo;
	int exp;
	int pos;
	int item;
	
public:
	CEnemigo();
	~CEnemigo();
	void ColisionRango(int JposX, int JposY);
	void Es_Atacado(int daño);
	void generar_enemigo(int x, int y,int lugar,CMapa *obj, int semilla);
	long long atacar(int JposX, int JposY);
	int gettipo();
	bool getmuerto();
	bool getitem();
};

