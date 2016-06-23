#pragma once
#include "Item.h"


struct recompensa
{
	CItem *booster;
	int BoostVida;
	int BoostEnergia;
	recompensa setRecompensa();
};

class CMision
{
private:
	char *enunciado;
	int cantidad;
public:
	
	CMision();
	~CMision();
	friend recompensa recompensa::setRecompensa();
	char *getMision();
	void setCantidad(int cant);
};

