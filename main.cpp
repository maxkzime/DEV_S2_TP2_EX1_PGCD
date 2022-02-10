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

using namespace std;

int main()
{
    std::cout << "BODIN Maxime C2" << "\n\n";
    
    int a=0, b=0;
    cout << "Enter A and B: " << '\n';
    cin >> a; cin.ignore();
    cin >> b; cin.ignore();

    cout << "a: " << a << " b: " << b <<  '\n';

    PGCD x(a,b);
    x.display();

    //--------TESTS--------
    cout << "Tests : " << "\n\n\n";

    // random number generator
    auto seed = chrono::high_resolution_clock::now().time_since_epoch().count();
    static mt19937 gen(seed);

    uniform_int_distribution<> distribNumber(-30,30); // limites incluses du générateur de nombre aléatoire

    for (int i=0; i <11; i++)
    {
        PGCD x(distribNumber(gen),distribNumber(gen));
        x.display();
    }

    return 0;
}
