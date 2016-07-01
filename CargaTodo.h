#pragma once
#ifndef load
#define load

#include <fstream>
#include <string>
#include <iostream>
#include <sstream>
#include <vector>
#include "Item.h"
#include "Mision.h"
#include "avltree.h"
class CCargaTodo
{
private:
	std::vector<CItem*> arrItems;
public:
	CCargaTodo();
	~CCargaTodo();
	std::vector <CItem*> CargarItems(int semilla);
	ArbolAVL<CMision*> *CargarMisiones(int semilla);
};
#endif
