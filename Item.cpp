#include "Item.h"
#include <fstream>
#include <time.h>
CItem::CItem()
{
	aumAtaque = 0;
	aumDefensa = 0;
	nombre = new char[50];
}


CItem::~CItem()
{
	delete nombre;
}

void CItem::setEstadistica(bool recibir){
	if (recibir == true){
		std::ifstream archivo("items.txt");
		char *cadena = new char[100];
		char *cad2 = new char[2];
		char *cad3 = new char[2];
		srand(3);
		int probabilidad = rand() % 151;
		int lineas;
		if (probabilidad > 140){
			lineas = rand() % 2 + 5;
		}
		else
			if (probabilidad < 140 && probabilidad>100){
				lineas = rand() % 2 + 3;
			}
			else{
				lineas = rand() % 2 + 1;
			}


			while (lineas<0){
				archivo.getline(cadena, 100);
				lineas--;
			}
			int contador = 0;
			int aux = 0;
			int pos = 0;

			while (contador == 0){
				nombre[pos] = cadena[pos];
				pos++;
				if (cadena[pos + 1] == ','){
					contador++;
				}
			}
			pos += 2;
			while (contador == 1){
				cad2[aux] = cadena[pos];
				pos++;
				aux++;
				if (cadena[pos + 1] == ','){
					contador++;
				}
			}
			pos += 2;
			aux = 0;
			while (contador == 2){
				cad3[aux] = cadena[pos];
				pos++;
				aux++;
				if (cadena[pos + 1] == ','){
					contador++;
				}
			}

			aumAtaque = (int)cad2;
			aumDefensa = (int)cad3;

	}
	

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