#pragma once
#include <iostream>
#include "./Stos.h"

Stos::Stos(int size) {
	this->arr = new int[size];
	this->totalSize = size;
	this->currentSize = 0;
}
Stos::~Stos() {
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



