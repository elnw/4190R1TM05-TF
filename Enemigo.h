#pragma once


class CEnemigo {
protected:
	long long vida;
	long long ataque;
	bool muerto;
	int evasion;
	bool rango;
	int tipo;
	long long exp;
	int pos;
	int item;
	
public:
	CEnemigo();
	~CEnemigo();
	int getpos();
	bool ColisionRango(int JposX, int JposY);
	void Es_Atacado(long long daño);
	void generar_enemigo(int x, int y,int lugar,int minimo,int maximo, int semilla);
	long long atacar();
	int gettipo();
	bool getmuerto();
	bool getitem();
	long long experiencia();
};

