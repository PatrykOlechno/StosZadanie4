#include <iostream>
#include "Stos.h"

void f(Stos s, int a) {
    s.push(a);
}
int main() {
    Stos s;
    s.push(0);
    f(s, 1);
    f(s, 2);
    while (!s.empty()) {
        std::cout << s.top();
        s.pop();
    }
}
/*2.
B�ad polega na tym, �e do funkcji wysy�amy obiekt automatyczny,
na dodatek jego kopie, przez co nie zmieniamy w nim nic i kopia
jest usuwana po wyjsciu z funkcji f.
Naprawic to mozna tworzac bezparametrowy konstruktor ktory bedzie 
przypisywal domyslne dane do obiektu oraz sprawic zeby destruktor 
nie usuwal tablicy, bo wywola sie on po kazdym wywolaniu funkcji f.
Po takich zmianach w klasie Stos powy�szy kod wypisze nam 0, bo tylko
taka warto�� zosta� dodany w aktualnym zakresie.
�eby funkcja f dzia�a�a tak jak powinna, powinn�my dawa� jej orygina�
stosu, mozna to zrobi� przez wskaznik *.
*/

/*3.
W konsoli zostaly wypisane 3 komunikaty destruktora co odpowiada
2 wywolaniom funkcji i wyjscia z jej zakresu oraz jednego wyjscia
z zakresu maina.
*/

/*4.
Z konsoli z adresami mozna wyczytac, ze na poczatku tworzy sie obiekt w
mainie. Wywolanie funkcji f to kolejny stos ktory usuwa sie po skonczenu f.
Nastepny stos tak samo. I na koniec wywoluje sie destruktor pierwszego stosu
z maina
*/