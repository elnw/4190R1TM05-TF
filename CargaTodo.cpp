#include "CargaTodo.h"



CCargaTodo::CCargaTodo()
{
}


CCargaTodo::~CCargaTodo()
{
}


std::vector<CItem*> CCargaTodo::CargarItems(int semilla){
	std::ifstream archivo("items.txt");
	char *cadena = new char[100];
	std::string nombre = new char[100];
	std::string cad2 = new char[2];
	std::string cad3 = new char[2];
	int aumAtaque, aumDefensa;
	std::string linea;
	int contador = 0;

	CItem *cosa = new CItem();
	
	while (std::getline(archivo, linea)){
		std::stringstream linestream(linea);
		std::string valor;
		while (getline(linestream, valor, ',')){
			switch (contador)
			{
			case 0:
				nombre = valor;
				break;
			case 1:
				cad2 = valor;
				break;
			case 2:
				cad3 = valor;
				break;
		
			}

			contador++;
		}
		contador = 0;

		aumAtaque = std::stoi(cad2);
		aumDefensa = std::stoi(cad3);
		cosa->setEstadistica(nombre, aumDefensa, aumAtaque);
		arrItems.push_back(cosa);
	}
	

		return arrItems;
}
ArbolAVL<CMision*> *CCargaTodo::CargarMisiones(int semilla){
	std::ifstream enun("enunciado.txt");
	std::ifstream motivo("motivo.txt");
	std::ifstream recomp("recompensa.txt");

	ArbolAVL<CMision*> *arbolAux;
	auto compDific = [](CMision* una, CMision* dos){
		return una->getDificultad() > dos->getDificultad() ? 1 : una->getDificultad() < dos->getDificultad() ? -1 : 0;
	};

	auto getMision = [](CMision* obj){
		cout << obj->getMision();
	};

	arbolAux = new ArbolAVL<CMision*>(getMision, compDific);

	int canntenum, tipoenum, cantrecom, tiporecom;
	char *cadena = new char[100];
	char *cad2 = new char[100];
	char *cad3 = new char[100];
	srand(semilla);

	int lineas;
	int lineas2;
	int lineas3;

	int difif;

	for (int CantMi = 0; CantMi < 8000; CantMi++){
		CMision *boj = new CMision();
		
		lineas = rand() % 16;
		lineas2 = rand() % 16;
		lineas3 = rand() % 16;


		for (int i = 0; i < lineas; i++){
			enun.getline(cadena, 100);
		}
		for (int i = 0; i < lineas2; i++){
			motivo.getline(cad2, 100);
		}
		for (int i = 0; i < lineas3; i++){
			recomp.getline(cad3, 100);
		}

		difif = (int)cadena[0];

		int cont = 0;
		char *aux = new char[4];
		for (int i = 1; i < 100; i++){
			if (cadena[i] != ' ' || cadena[i] != ','){
				aux[cont] = cadena[i];
				cont++;
			}
			else{
				cont++;
				break;
			}
		}
		for (int i = 0; i < 100; i++){
			if (cad3[i] != ' ' || cad3[i] != ','){
				aux[cont] = cad3[i];
				cont++;
			}
		}
		//progreso
		canntenum = (int)aux[0];
		tipoenum = (int)aux[1];

		//atributos
		cantrecom = (int)aux[2];
		tiporecom = (int)aux[3];

		std::string fin = std::string(cadena) + std::string(cad2) + std::string(cad3);
		boj->setEnunciado(fin);
		boj->setCantidad(cantrecom);
		boj->setDificultad(difif);
		arbolAux->insertar(boj);
		//delete aux;
	}

	return arbolAux;
}