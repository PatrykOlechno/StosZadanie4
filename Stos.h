#pragma once

class Stos
{
	int* arr;
	int totalSize;
	int currentSize;

public:
	Stos(); //konstruktor bez parametrow
	Stos(int size); //konstruktor z parametre,
	~Stos(); //destruktor

	int push(int number);
	int pop();
	int top();
	void display();
	bool empty();
	bool full();
};
