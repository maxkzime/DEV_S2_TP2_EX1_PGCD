// TP2/EX1/pgcd.h
// exercice 1 : PGCD
// BODIN Maxime C2
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
    void display() const;


    int getPGCD() const;

    int getItsA() const;
    void setItsA(int newItsA);

    int getItsB() const;
    void setItsB(int newItsB);

};

#endif // PGCD_H
