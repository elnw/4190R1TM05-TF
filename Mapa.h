#pragma once
#ifndef mapazo
#define mapazo
#include <vector>;
#include "ArrEnemigos.h"
class CMapa
{
private:
	int i=0, j=0;
	int **matriz;

public:
	CMapa();
	~CMapa();
	//void llenadobasicomatriz();


	void cruzandopuerta(int aumi, int aumj, ArrEnemigos *la_crew_jovena, CEnemigo *jovenomalote, CMapa*objmapitapoderosotodopoderoso, int semillamaestra);
	
	
	int getminimo();
	int getmaximo();
	int getx();
	int gety();
};

#endif