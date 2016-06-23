#include "Node.h"
#include <iostream>
using namespace std;

template <typename T>
CNode<T>::CNode()
{
	//data = new T();
	next = nullptr;
}

template <typename T>
CNode<T>::~CNode()
{
	data = NULL;
	next = nullptr;
}

template <typename T>
T CNode<T>::getData() {
	return data;
}

template <typename T>
void CNode<T>::setData(T data) {
	this->data = data;
}

template <typename T>
CNode<T>* CNode<T>::getNext(){
	return next;
}

template <typename T>
void CNode<T>::setNext(CNode<T>* next) {
	this->next = next;
}
