#pragma once
#include <iostream>
#include "./Stos.h"

Stos::Stos() {
	// obserwacja: wywoluje sie dla obiektu automatycznego
	std::cout << "Jestem bezparametrowym konstryktorem" << std::endl;
	std::cout << "Adres stworzonego obiektu: " << this << std::endl;
}

Stos::Stos(int size) {
	// obserwacja: wywoluje sie zawsze
	this->arr = new int[size];
	this->totalSize = size;
	this->currentSize = 0;
	std::cout << "Jestem konstryktorem z parametrem" << std::endl;
	std::cout << "Adres stworzonego obiektu: " << this << std::endl;
}
Stos::~Stos() {
	//obserwacja: dla zmiennej automatycznej wywola sie po wyjsciu z zakresu
	//dla zmiennej dynamicznej wywola sie po uzyciu delete
	std::cout << "Jestem destruktorem" << std::endl;
	std::cout << "Adres usunietego obiektu: " << this << std::endl;
	delete[] arr;
}

int Stos::push(int number) {
	if (full()) {
		return -1;
	}
	else {
		//zwyaczjnie dodajemy
		this->arr[this->currentSize] = number;
		this->currentSize++;
		return 0;
	}
}

void Stos::display() {
	for (int i = 0; i < currentSize; i++) {
		std::cout << this->arr[i];
	}
}

bool Stos::full() {
	return this->currentSize == this->totalSize;
}

bool Stos::empty() {
	return this->currentSize == 0;;
}
int Stos::pop() {
	if (empty()) {
		return -1;
	}
	else {
		this->currentSize--;
		return this->arr[this->currentSize];
	}
}
int Stos::top() {
	if (empty()) {
		return -1;
	}
	else {
		return this->arr[this->currentSize-1];
	}
}



