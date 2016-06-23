#pragma once

#include "Node.h"

using namespace std;

template <class T>
class CMyList
{
private:
	CNode<T> *begin;
public:
	CMyList();
	~CMyList();
	CNode<T>* getBegin();
	void setBegin(CNode<T>* begin);
	bool addAtBegin(T value);
	bool deleteByPosition(int pos);

};

