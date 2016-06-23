#pragma once
#ifndef enpici
#define enpici
#include "Cola.h"
#include "Cola.cpp"
#include "Mision.h"
class Cnpc
{
private:
	int *arregloX;
	int *arregloY;
	CCola<CMision> *misiones;

public:
	Cnpc();
	~Cnpc();
	CCola<CMision> *getCola();
	bool ValidarMision(int posX, int posY);
};

#endif