// TP2/EX1/pgcd.h
// exercice 1 : PGCD
// 22/10/02

#ifndef PGCD_H
#define PGCD_H

class PGCD
{
private:
    int itsA;
    int itsB;
    int itsPGCD;

public:
    PGCD(int a, int b);
    void compute();
    void display();
};

#endif // PGCD_H
