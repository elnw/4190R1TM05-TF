#include "ArrItems.h"


CArrItems::CArrItems()
{
}


CArrItems::~CArrItems()
{
}



void CArrItems::AgregarItem(CItem *objeto){
	this->vecItems.push_back(objeto);
}


CItem *CArrItems::getItem(int pos){
	return vecItems.at(pos);
}

void CArrItems::setItem(std::vector<CItem*> arai){
	this->vecItems = arai;
}