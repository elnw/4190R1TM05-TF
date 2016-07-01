#pragma once
#ifndef arreglito
#define arreglito
#include <vector>
#include <iostream>
#include "Enemigo.h"

class ArrEnemigos
{
private:
	std::vector<CEnemigo> *objEnemigos;
public:
	ArrEnemigos();
	~ArrEnemigos();
	//std::vector <CEnemigo> *getEnemigos();
	CEnemigo getEnemigo(int pos);

	void AgregarEnemigo(CEnemigo malevolo);
};

#endif