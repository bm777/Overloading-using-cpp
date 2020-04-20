#include <iostream>
#include "Duree.h"

using namespace std;

int main()
{

    Duree duree1(18, 10, 27);
    Duree duree2(18, 55, 56);
    if(duree1 >= duree2)
        cout << "La Seconde est petite ou egale" << endl;
    else
        cout << "La seconde est strictement sup" << endl;
    duree1.affiche();
    duree2.affiche();

    Duree d = duree1.addition(duree2);
    d.affiche();

    return 0;
}
