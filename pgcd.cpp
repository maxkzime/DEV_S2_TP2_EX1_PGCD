// TP2/EX1/pgcd.cpp
// exercice 1 : PGCD
// BODIN Maxime C2
// 22/10/02

#include <iostream>
#include <string>

#include "pgcd.h"

PGCD::PGCD(int a, int b)
{   
    a = abs(a);
    b = abs(b);

    if(a<b)
        std::swap(a,b);

    itsA = a; itsB = b;

    compute();
}

void PGCD::compute()
{
    int r = 0;
    int a = itsA;
    int b = itsB;

    if(itsA <=0 || itsB <= 0)
        itsPGCD = 0 ;
    else
    {
        do{
            r = a%b;
            a=b;
            b=r;
        }while(b>0);

        itsPGCD = a ;
    }
}


void PGCD::display() const
{
    if(itsA <=0 || itsB <= 0)
        std::cout << "PGCD(" << itsA << ',' << itsB << ") = " << "PGCD impossible" << "\n\n";
    else
        std::cout << "PGCD(" << itsA << ',' << itsB << ") = " << itsPGCD << "\n\n";
}

// SETTER + GETTER

int PGCD::getItsA() const
{
    return itsA;
}

void PGCD::setItsA(int newItsA)
{
    itsA = newItsA;
}

int PGCD::getItsB() const
{
    return itsB;
}

void PGCD::setItsB(int newItsB)
{
    itsB = newItsB;
}

int PGCD::getPGCD() const
{
    return itsPGCD;
}
