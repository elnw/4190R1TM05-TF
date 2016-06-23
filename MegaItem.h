#pragma once
#include "Item.h"
class CMegaItem :
	public CItem
{
private:
	int tiempo;
	int AumentoStat;
public:
	CMegaItem();
	~CMegaItem();

	void setTiempo(int valor);

	int getAumento();
	int getTiempo();

};

