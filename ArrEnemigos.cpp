#include "ArrEnemigos.h"


ArrEnemigos::ArrEnemigos()
{
}


ArrEnemigos::~ArrEnemigos()
{
	objEnemigos.clear();
}



std::vector<CEnemigo*> ArrEnemigos::getEnemigos(){
	return objEnemigos;
}

CEnemigo *ArrEnemigos::getEnemigo(int pos){
	return objEnemigos.at(pos);
}

void ArrEnemigos::AgregarEnemigo(CEnemigo *malevolo){
	objEnemigos.push_back(malevolo);
}