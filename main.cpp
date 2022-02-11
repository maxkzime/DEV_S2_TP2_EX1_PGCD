// TP2/EX1/main.cpp
// exercice 1 : PGCD
// BODIN Maxime C2
// 22/10/02

#include <iostream>
#include <string>
#include <algorithm>
#include <random> // pour générer  un nombre aléatoire
#include <chrono> // pour la seed du générateur de nombre aléatoire

#include "pgcd.h"

int main()
{
    std::cout << "BODIN Maxime C2" << "\n\n";
    
    int a=0, b=0;
    std::cout << "Enter A and B: " << '\n';
    std::cin >> a; std::cin.ignore();
    std::cin >> b; std::cin.ignore();

    PGCD x(a,b);
    x.display();

    std::cout << "a: " << x.getItsA() << " b: " << x.getItsB() <<  '\n';

    // Tests Getter+Setter
    std::cout << "Enter A and B: " << '\n';
    std::cin >> a; std::cin.ignore();
    std::cin >> b; std::cin.ignore();

    x.setItsA(a);
    x.setItsB(b);
    x.compute();

    std::cout << "a: " << x.getItsA() << " b: " << x.getItsB() <<  '\n';
    std::cout << "PGCD : " << x.getPGCD() << '\n';


    //--------TESTS--------
    std::cout << "\n\n\n" << " Tests : " << "\n\n\n";

    // random number generator
    auto seed = std::chrono::high_resolution_clock::now().time_since_epoch().count();
    static std::mt19937 gen(seed);

    std::uniform_int_distribution<> distribNumber(-30,30); // limites incluses du générateur de nombre aléatoire

    for (int i=0; i <11; i++)
    {
        PGCD x(distribNumber(gen),distribNumber(gen));
        x.display();
    }

    // test (0,3)
    x.setItsA(0);
    x.setItsB(3);
    x.compute();
    x.display();


    return 0;
}
