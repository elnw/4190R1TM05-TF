#include "Personaje.h"
#include <iostream>

CPersonaje::CPersonaje()
{
	vida=200;
	vidamax = 200;
	 nivel=0;
	ataque=10;
	defensa=0;
	defensareal=0;
	energia=100;
	energiamax = 100;
	pocionvida=0;
	pocionenergia=0;
	auxataque=0;
	auxdefensa=0;
	condicionado=false;
	contcondicionado=0;
	muerto = false;
	exp=0;
	expmax=100;
}
CPersonaje::~CPersonaje(){
	vida = NULL;
	nivel = NULL;
	ataque = NULL;
	defensa = NULL;
	defensareal = NULL;
	energia = NULL;
	pocionvida = NULL;
	pocionenergia = NULL;
	auxataque = NULL;
	auxdefensa = NULL;
	condicionado = false;
	contcondicionado = NULL;
	muerto = false;
}
void CPersonaje::calculardefensareal(){
	defensareal =(double)defensa / 100 + (double)defensa;
}
long long CPersonaje::getvida(){
	return this->vida;
}
int CPersonaje::getnivel(){
	return this->nivel;
}
long long CPersonaje::getataque(){
	return this->ataque;
}
long long CPersonaje::getdefensa(){
	return this->defensa;
}
int CPersonaje::getenergia(){
	return this->energia;
}
int CPersonaje::getpocionvida(){
	return this->pocionvida;
}
int CPersonaje::getpocionenergia(){
	return this->pocionenergia;
}
void CPersonaje::aumentar_nivel(){
	if (exp >= expmax) {
		this->nivel++;
		this->vida = vida + 20;
		this->energia = energia + 20;
		this->vidamax = vidamax + 20;
		this->energiamax = energiamax + 20;
		this->exp = 0;
		this->expmax = expmax * 10;
	}
}
void CPersonaje::aumentar_atributo(int aumentoatk, int aumentodef,int aumentopocvida, int aumentopocene){
	ataque += aumentoatk;
	defensa += aumentodef;
	pocionvida += aumentopocvida;
	pocionenergia += aumentopocene;
	
}
void CPersonaje::iniciosupermodo() {
	auxataque = ataque;
	auxdefensa = defensa;
	ataque += 32000;
	defensa += 32000;
	condicionado = true;
}
void CPersonaje::finsupermodo(){
	if (contcondicionado == 360){
		ataque = auxataque;
		defensa = auxdefensa;
		condicionado = false;
	}
	else{
		contcondicionado++;
	}
}
void CPersonaje::atacado(long long daño){
	this->vida = this->vida - long long(daño*double(1-defensareal));
	if (vida <= 0){
		muerto = true;
	}
	
}
bool CPersonaje::getmuerto(){
	return muerto;
}

void CPersonaje::Atacar(ArrEnemigos *vector, int valor, int posx, int posy, bool &validar){
	if (vector->getEnemigo(valor).ColisionRango(posx, posy)==true){
		validar = true;
		if (vector->getEnemigo(valor).getmuerto() == false){
			vector->getEnemigo(valor).Es_Atacado(ataque);
			if (vector->getEnemigo(valor).getmuerto() == true){
				exp+=vector->getEnemigo(valor).experiencia();
				if (exp > expmax){
					aumentar_nivel();

				}
			}
		}
		
	}
	this->energia -= 20;
}
