// TP2/EX1/pgcd.cpp
// exercice 1 : PGCD
// 22/10/02

#include <iostream>
#include <string>

#include "pgcd.h"

PGCD::PGCD(int a, int b)
{   
    if(a<0)
        a*=-1;

    if(b<0)
        b*=-1;

    if(a<b)
        std::swap(a,b);

    itsA = a;itsB = b;
}

void PGCD::compute()
{
    int r = 0;

    if(itsA <=0 || itsB <= 0)
        std::cout << "PGCD impossible";
    else
    {
        do{
            r = itsA%itsB;
            itsA=itsB;
            itsB=r;
        }while(itsB>0);

        std::cout << itsA ;
    }
}


void PGCD::display()
{
    std::cout << "PGCD(" << itsA << ',' << itsB << ") = ";compute(); std::cout << "\n\n";
}
