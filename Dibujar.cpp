#include "Dibujar.h"

CDibujar::CDibujar()
{
	
	dibujo = Rectangle(0, 0, 0, 0);
	 mapita = Rectangle(0, 0, 520, 312);
}


CDibujar::~CDibujar()
{
	
}
void CDibujar::pintarenemigos(Bitmap ^img, Graphics^g, ArrEnemigos* joveno_maluqui){
	Rectangle enemigos;
	for (int i = 0; i<14; i++){
		enemigos = Rectangle(50 * (joveno_maluqui->getEnemigo(i).gettipo()), 0, 50, 50);
		img->MakeTransparent(img->GetPixel((joveno_maluqui->getEnemigo(i).gettipo() * 50) + 1, 1));
		if (joveno_maluqui->getEnemigo(i).getmuerto() == false){
		if ((joveno_maluqui->getEnemigo(i).getpos())<7){
			g->DrawImage(img,150+ (175 * (joveno_maluqui->getEnemigo(i).getpos())), 100, enemigos, GraphicsUnit::Pixel);
		}
		else{
			g->DrawImage(img, 150 + (175 * ((joveno_maluqui->getEnemigo(i).getpos()) - 7)), 300, enemigos, GraphicsUnit::Pixel);
		}
		}
	}
}
void CDibujar::pintar(Bitmap^img, Graphics^g,int posx,int posy,int indicex,int indicey){
	dibujo = Rectangle(50 * indicex, 50*indicey, 50, 50);
	img->MakeTransparent(img->GetPixel(1, 1));
	g->DrawImage(img, posx, posy, dibujo, GraphicsUnit::Pixel);
}

void CDibujar::PintarMapa(Bitmap ^img, Graphics^g, int opcion){

	mapita = Rectangle(0, 0, 1250, 400);
	//img->MakeTransparent(img->GetPixel(1, 1));
	g->DrawImage(img, 59, 12, mapita, GraphicsUnit::Pixel);
}