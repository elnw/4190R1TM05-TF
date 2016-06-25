#pragma once
#include <string>
class CItem
{
protected:
	std::string nombre;
	int aumDefensa;
	int aumAtaque;
	int vida;
	int energia;
	int tipo;
	int cantidad;
public:
	CItem();
	~CItem();
	void setEstadistica(std::string nombre, int aumDefensa, int aumAtaque);
	int getAumDefensa();
	int getAumAtaque();
	CItem *getPremio(int cantidad, int tipo);

};

