#pragma once
#include "ArrEnemigos.h"
using namespace System::Drawing;
class CDibujar
{
private:
	System::Drawing::Rectangle dibujo;
	System::Drawing::Rectangle mapita;
public:
	CDibujar();
	~CDibujar();
	void pintarenemigos(Bitmap ^img, Graphics^g, ArrEnemigos* joveno_maluqui);
	void pintar(Bitmap ^img, Graphics^g, int posx, int posy, int indicex, int indicey);
	void PintarMapa(Bitmap ^img, Graphics^g, int opcion);
};

