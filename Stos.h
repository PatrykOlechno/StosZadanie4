#pragma once

class Stos
{
	int* arr;
	int totalSize;
	int currentSize;

public:
	Stos(int size); //konstruktor
	~Stos(); //destruktor

	int push(int number);
	int pop();
	int top();
	void display();
	bool empty();
	bool full();
};
