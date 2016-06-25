#include "Item.h"
#include <fstream>
#include <time.h>
CItem::CItem()
{
	aumAtaque = 0;
	aumDefensa = 0;

}


CItem::~CItem()
{
	
}

void CItem::setEstadistica(std::string nombre, int aumDefensa, int aumAtaque){
	this->nombre = nombre;
	this->aumAtaque = aumAtaque;
	this->aumDefensa = aumDefensa;
	

}

int CItem::getAumDefensa(){
	return aumDefensa;
}
int CItem::getAumAtaque(){
	return aumAtaque;
}

CItem *CItem::getPremio(int cantidad, int tipo){
	CItem *nuevo = new CItem();

	switch (tipo)
	{
	case 1:
		nuevo->aumAtaque = 5 * cantidad;
		break;
	case 2:
		nuevo->aumDefensa = 5 * cantidad;
		break;
	case 3:
		nuevo->aumAtaque = 10 * cantidad;
		break;
	case 4:
		nuevo->aumDefensa = 10 * cantidad;
		break;
	case 5:
		nuevo->aumAtaque = 20 * cantidad;
		break;
	case 6:
		nuevo->aumDefensa = 20 * cantidad;
		break;
	case 7:
		nuevo->vida =  cantidad;
		break;
	case 8:
		nuevo->energia = cantidad;
		break;

	}

	return nuevo;
}