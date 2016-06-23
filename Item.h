#pragma once
class CItem
{
protected:
	char *nombre;
	int aumDefensa;
	int aumAtaque;
	int vida;
	int energia;
	int tipo;
	int cantidad;
public:
	CItem();
	~CItem();
	void setEstadistica(bool recibir);
	int getAumDefensa();
	int getAumAtaque();
	CItem *getPremio(int cantidad, int tipo);

};

