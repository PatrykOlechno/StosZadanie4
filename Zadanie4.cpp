#include <iostream>
#include "Stos.h"

int main() {
	Stos* stos1 = new Stos(4);

	stos1->push(5);
	stos1->push(4);

	std::cout << stos1->top() << std::endl;
	return 0;
}