#pragma once
class CMapa
{
private:
	int i=0, j=0;
	int **matriz;

public:
	CMapa();
	~CMapa();
	void llenadobasicomatriz();
	void cruzandopuerta(int aumi,int aumj);
	int getminimo();
	int getmaximo();
	int getx();
	int gety();
};

