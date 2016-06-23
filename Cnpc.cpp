#include "Cnpc.h"


Cnpc::Cnpc()
{
	 arregloX=new int[3];
	 arregloY=new int[3];
	 misiones = new CCola<CMision>();
}


Cnpc::~Cnpc()
{
	delete arregloX;
	delete arregloY;
	delete misiones;
}

CCola<CMision> *Cnpc::getCola(){
	return misiones;
}

bool Cnpc::ValidarMision(int posX, int posY){
	bool validacion = true;
	for (int i = 0; i < 3; i++){
		if (arregloX[i] == posX && arregloY[i] == posY){
			validacion = false;
			break;
		}
	}
	return validacion;
}