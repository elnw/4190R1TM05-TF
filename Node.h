#pragma once

using namespace std;

template <class T>
class CNode
{
private:
	T data;
	CNode<T> *next;
public:
	CNode();
	~CNode();
	T getData();
	void setData(T data);

	CNode* getNext();
	void setNext(CNode<T>* next);

};

