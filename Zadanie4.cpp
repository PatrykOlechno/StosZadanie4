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
/*
B³ad polega na tym, ¿e do funkcji wysy³amy obiekt automatyczny,
na dodatek jego kopie, przez co nie zmieniamy w nim nic i kopia
jest usuwana po wyjsciu z funkcji f.
Naprawic to mozna tworzac bezparametrowy konstruktor ktory bedzie 
przypisywal domyslne dane do obiektu oraz sprawic zeby destruktor 
nie usuwal tablicy, bo wywola sie on po kazdym wywolaniu funkcji f.
Po takich zmianach w klasie Stos powy¿szy kod wypisze nam 0, bo tylko
taka wartoœæ zosta³ dodany w aktualnym zakresie.
¯eby funkcja f dzia³a³a tak jak powinna, powinnœmy dawaæ jej orygina³
stosu, mozna to zrobiæ przez wskaznik *.
*/