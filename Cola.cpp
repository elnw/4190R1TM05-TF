#include "Cola.h"
#define NULL 0



template <typename T>
CCola<T>::CCola()
{
	max=3;
	vector = new T[max];
	n=0;
	posI = 0;
}

template <typename T>
CCola<T>::~CCola()
{
	delete[] vector;
}

template <typename T>
void CCola<T>::encolar(T e){
	if (n != max){
		if (e != -1){
			vector[n] = e;
			n++;
		}
	}
	else
		cout << "cola llena" << endl;
	
	
}

template <typename T>
void CCola<T>::desencolar(){
	vector[posI] = NULL;
	posI++;
	n--;
}

template <typename T>
T CCola<T>::front(){
	return vector[posI];
}
