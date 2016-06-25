#pragma once
#include <fstream>
#include <string>
#include <iostream>
#include <sstream>
#include <vector>
#include "Item.h"
#include "Mision.h"
class CCargaTodo
{
private:
	std::vector<CItem*> arrItems;
public:
	CCargaTodo();
	~CCargaTodo();
	std::vector <CItem*> CargarItems(int semilla);
	CMision *CargarMisiones(int semilla);
};

