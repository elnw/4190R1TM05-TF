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
	return vida;
}
int CPersonaje::getnivel(){
	return nivel;
}
long long CPersonaje::getataque(){
	return ataque;
}
long long CPersonaje::getdefensa(){
	return defensa;
}
int CPersonaje::getenergia(){
	return energia;
}
int CPersonaje::getpocionvida(){
	return pocionvida;
}
int CPersonaje::getpocionenergia(){
	return pocionenergia;
}
void CPersonaje::aumentar_nivel(){
	if (exp >= expmax) {
		nivel++;
		vida = vida + 20;
		energia = energia + 20;
		vidamax = vidamax + 20;
		energiamax = energiamax + 20;
		exp = 0;
		expmax = expmax * 10;
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
void CPersonaje::atacado(int daño){
	vida = vida - long long(double(daño)*defensareal);
	if (vida <= 0){
		muerto = true;
	}
}
bool CPersonaje::getmuerto(){
	return muerto;
}