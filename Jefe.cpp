#include "Jefe.h"


CJefe::CJefe() :CEnemigo()
{
	std::srand(90);
	tipo = std::rand() % 5;
	evasion = 2 * (tipo + 1);
	vida = 200 * (tipo + 1);
	rango = true;
	muerto = false;
	exp = 100 * (tipo + 1);
	pos = 0;
	MultiPoder = rand() % 5;
	ataque = 50 * (tipo + 1)*MultiPoder;
}


CJefe::~CJefe()
{
}
