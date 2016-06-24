#include "Dibujar.h"

CDibujar::CDibujar()
{
	
	dibujo = Rectangle(0, 0, 0, 0);
	 mapita = Rectangle(0, 0, 520, 312);
}


CDibujar::~CDibujar()
{
	
}
void CDibujar::pintarenemigos(Bitmap ^img, Graphics^g, CEnemigo *joveno_maluqui){
	dibujo = Rectangle(50 * (joveno_maluqui->gettipo()), 0, 50, 50);
	img->MakeTransparent(img->GetPixel(1, 1));
	if ((joveno_maluqui->getpos())<7){
		g->DrawImage(img, 400*(joveno_maluqui->getpos()), (150 * 0) + 450, dibujo, GraphicsUnit::Pixel);
	}
	else{
		g->DrawImage(img, 400 * ((joveno_maluqui->getpos()) - 7), (150 * 1) + 450, dibujo, GraphicsUnit::Pixel);
	}
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