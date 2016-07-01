#include "Mapa.h"
#include <iostream>
#include <time.h>

CMapa::CMapa()
{
	matriz=new int *[40];
	for (int aux = 0;aux < 40;aux++) {
		matriz[aux] = new int[40];
	}
for (int aux = 0;aux < 40;aux++) {
for (int aux1 = 0;aux1 < 40;aux1++) {
		matriz[aux][aux1] = 0;
}	
}

}
CMapa::~CMapa(){
	for (int aux = 0;aux < 40;aux++) {
		delete[] matriz[aux];
	}
	delete[] matriz;
}


void CMapa::cruzandopuerta(int aumi, int aumj, ArrEnemigos* la_crew_jovena, CEnemigo jovenomalote, CMapa*objmapitapoderosotodopoderoso,int semillamaestra){
	i = i + aumi;
	j = j + aumj;
	la_crew_jovena->~ArrEnemigos();

	for (int k = 0; k < 14; k++){
		jovenomalote.generar_enemigo(i, j, k, objmapitapoderosotodopoderoso->getminimo(), objmapitapoderosotodopoderoso->getmaximo(), semillamaestra);
		la_crew_jovena->AgregarEnemigo(jovenomalote);
		semillamaestra++;
	}

}
int CMapa::getminimo() {
	int valor;
	if (i <= 20 && j <= 20) {
		valor = 0;
	}
	if ((i > 20 && j < 20) || (i < 20 && j > 20) ) {
		valor = 5;
	}
	if (i >= 20 && j >= 20) {
		valor=20;
	}
	return valor;
}
int CMapa::getmaximo() {
	int valor;
	if (i <= 20 && j <= 20) {
		valor = 5;
	}
	if ((i > 20 && j < 20) || (i < 20 && j > 20)) {
		valor = 20;
	}
	if (i >=20 && j >= 20) {
		valor = 25;
	}
	return valor;
}
int CMapa::getx(){
	return i;
}
int CMapa::gety() {
	return j;
}