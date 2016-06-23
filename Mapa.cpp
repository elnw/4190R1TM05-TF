#include "Mapa.h"
#include <iostream>
#include <time.h>

CMapa::CMapa()
{
	matriz=new int *[40];
	for (int aux = 0;i < 40;i++) {
		matriz[aux] = new int[40];
	}
	matriz[0][0] = 0;matriz[1][0] = 0;matriz[0][1] = 0;
}
CMapa::~CMapa(){
	for (int aux = 0;i < 40;i++) {
		delete[] matriz[aux];
	}
	delete[] matriz;
}
void CMapa::llenadobasicomatriz(){
	srand(time_t(0));
	for(int aux1=i-1;aux1<i+2;aux1++){
		for (int aux2 = j - 1;aux2<j + 2;aux2++) {
			if (matriz[aux1][aux2] == NULL) {
				matriz[aux1][aux2] = rand() % 5;
			}
		}
	}
}
void CMapa::cruzandopuerta(int aumi, int aumj){
	i = i + aumi;
	j = j + aumj;
	llenadobasicomatriz();
}
int CMapa::getminimo() {
	int valor;
	if (i < 20 && j < 20) {
		valor = 0;
	}
	if ((i > 20 && j < 20) || (i < 20 && j>20)) {
		valor = 5;
	}
	if (i > 20 && j > 20) {
		valor=20;
	}
	return valor;
}
int CMapa::getmaximo() {
	int valor;
	if (i < 20 && j < 20) {
		valor = 5;
	}
	if ((i > 20 && j < 20) || (i < 20 && j>20)) {
		valor = 20;
	}
	if (i > 20 && j > 20) {
		valor = 25;
	}
	return valor;
}
int CMapa::getx(){
	return j;
}
int CMapa::gety() {
	return i;
}