#pragma once
#include "Item.h"
#include <string>


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
	std::string enunciado;
	int cantidad;
	int dificultad;
public:
	
	CMision();
	~CMision();
	friend recompensa recompensa::setRecompensa();
	std::string getMision();
	void setCantidad(int cant);
	void setEnunciado(std::string enunciado);
	void setDificultad(int indicador);

	int getDificultad();
};

