#include "Dibujar.h"

CDibujar::CDibujar()
{
	
	dibujo = Rectangle(0, 0, 0, 0);
	 mapita = Rectangle(0, 0, 520, 312);
}


CDibujar::~CDibujar()
{
	
}
void CDibujar::pintarenemigos(Bitmap ^img, Graphics^g, CEnemigo *eminen){

}
void CDibujar::pintar(Bitmap^img, Graphics^g,int posx,int posy,int indicex,int indicey){
	dibujo = Rectangle(50 * indicex, 50*indicey, 50, 50);
	img->MakeTransparent(img->GetPixel(1, 1));
	g->DrawImage(img, posx, posy, dibujo, GraphicsUnit::Pixel);
}

void CDibujar::PintarMapa(Bitmap ^img, Graphics^g, int opcion){

	mapita = Rectangle(0, 0, 620, 445);
	img->MakeTransparent(img->GetPixel(1, 1));
	g->DrawImage(img, 356, 397, mapita, GraphicsUnit::Pixel);
}