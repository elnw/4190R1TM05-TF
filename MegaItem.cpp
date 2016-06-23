#include "MegaItem.h"


CMegaItem::CMegaItem()
{
	aumAtaque = 0;
	aumDefensa = 0;
	nombre = new char[50];
	AumentoStat = 15;
	tiempo = 30;
}


CMegaItem::~CMegaItem()
{
}

void CMegaItem::setTiempo(int valor){
	this->tiempo = valor;
}

int CMegaItem::getAumento(){
	return AumentoStat;
}

int CMegaItem::getTiempo(){
	return tiempo;
}