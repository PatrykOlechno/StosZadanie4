#include <iostream>
#include "Stos.h"

int main() {
	{
		Stos stosautomatyczny;
	}

	{
		Stos* stos1 = new Stos(4);

		stos1->push(5);
		stos1->push(4);

		std::cout << stos1->top() << std::endl;
		delete stos1;
	}

	return 0;
}