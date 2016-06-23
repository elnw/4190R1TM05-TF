#pragma once
template <class T>
class CCola
{
private:
	T *vector;
	int max;
	int n;
	int posI;

public:
	CCola();
	~CCola();
	void encolar(T e);
	void desencolar();
	T front();

};

