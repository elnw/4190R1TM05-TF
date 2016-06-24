#pragma once
#include "Enemigo.h"
using namespace System::Drawing;
class CDibujar
{
private:
	Rectangle dibujo;
	Rectangle mapita;
public:
	CDibujar();
	~CDibujar();
	void pintarenemigos(Bitmap ^img, Graphics^g, CEnemigo *joveno_maluqui);
	void pintar(Bitmap ^img, Graphics^g, int posx, int posy, int indicex, int indicey);
	void PintarMapa(Bitmap ^img, Graphics^g, int opcion);
};

