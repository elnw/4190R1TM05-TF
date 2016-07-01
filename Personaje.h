#pragma once
#include "ArrEnemigos.h"
class CPersonaje
{
protected:
	long long vida;
	long long vidamax;

	int nivel;
	long long ataque;
	bool muerto;

	long long exp;
	long long expmax;

	double defensareal;
	long long defensa;
	int energia;

	int energiamax;
	int pocionvida;

	int pocionenergia;
	long long auxataque;
	long long auxdefensa;

	bool condicionado;
	int contcondicionado;
	
public:
	CPersonaje();
	~CPersonaje();
	long long getvida();
	int getnivel();
	long long getataque();
	long long getdefensa();
	int getenergia();
	int getpocionvida();
	int getpocionenergia();
	void aumentar_nivel();
	void aumentar_atributo(int aumentoatk, int aumentodef, int aumentopocvida, int aumentopocene);
	void iniciosupermodo();
	void finsupermodo();
	void calculardefensareal();
	void atacado(long long daño);
	bool getmuerto();
	void Atacar(ArrEnemigos *vector, int valor, int posx, int posy,bool &validar);
	
};

