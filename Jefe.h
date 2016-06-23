#pragma once
#include "Enemigo.h"
#include <iostream>
class CJefe :
	public CEnemigo
{
private:
	int MultiPoder;
public:
	CJefe();
	~CJefe();
};

