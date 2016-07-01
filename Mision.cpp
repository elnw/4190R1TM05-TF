#include "Mision.h"
#include <fstream>

CMision::CMision()
{
	enunciado = new char[100];
}


CMision::~CMision()
{
	
}

/*recompensa recompensa::setRecompensa(){
	recompensa registro;
	std::ifstream enun("enunciado.txt");
	std::ifstream motivo("motivo.txt");
	std::ifstream recomp("recompensa.txt");
	int canntenum, tipoenum, cantrecom, tiporecom;
	char *cadena = new char[100];
	char *cad2 = new char[100];
	char *cad3 = new char[100];
	srand(20);
	int lineas = rand() % 16;
	int lineas2 = rand() % 16;
	int lineas3 = rand() % 16;


	for (int i = 0; i < lineas; i++){
		enun.getline(cadena, 100);
	}
	for (int i = 0; i < lineas2; i++){
		motivo.getline(cad2, 100);
	}
	for (int i = 0; i < lineas3; i++){
		recomp.getline(cad3, 100);
	}
	int cont=0;
	char *aux = new char[4];
	for (int i = 0; i < 100; i++){
		if (cadena[i] != ' ' || cadena[i] != ','){
			aux[cont] = cadena[i];
			cont++;
		}
		else{
			
		}
	}
	for (int i = 0; i < 100; i++){
		if (cad3[i] != ' ' || cad3[i] != ','){
			aux[cont] = cad3[i];
			cont++;
		}
		else{

		}
	}
	//progreso
	canntenum = (int) aux[0];
	tipoenum = (int) aux[1];

	//atributos
	cantrecom = (int) aux[2];
	tiporecom = (int) aux[3];

	registro.booster = registro.booster->getPremio(cantrecom, tiporecom);

	return registro;

}*/

std::string CMision::getMision(){
	return enunciado;
}

void CMision::setCantidad(int cant){
	this->cantidad = cant;
}

void CMision::setEnunciado(std::string enunciado){
	this->enunciado = enunciado;
}

void CMision::setDificultad(int indicador){
	this->dificultad = indicador;
}

int CMision::getDificultad(){
	return dificultad;
}