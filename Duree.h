#ifndef DUREE_H_INCLUDED
#define DUREE_H_INCLUDED

#include <iostream>

class Duree
{
    public:

    Duree(int heures = 0, int minutes = 0, int secondes = 0);
    bool operator==(Duree const& b) const;
    bool estEgal(Duree const& b) const;
    bool operator!=(Duree const& b) const;
    bool operator<(Duree const& b) const;
    bool estPlusPetitQue(Duree const& b) const;
    bool operator>(Duree const& b) const;
    bool operator>=(Duree const& b) const;
    bool operator<=(Duree const& b) const;
    Duree operator+(Duree const& b);


    bool InfEgale(Duree const& b) const;
    bool supEgale(Duree const& b) const;
    Duree addition(Duree const& b);
    void affiche() const;

    private:

    int m_heures;
    int m_minutes;
    int m_secondes;
};

#endif // DUREE_H_INCLUDED
