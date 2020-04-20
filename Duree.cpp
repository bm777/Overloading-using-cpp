#include "Duree.h"
#include <string>
#include <iostream>

using namespace std;

Duree::Duree(int heures, int minutes, int secondes) : m_heures(heures), m_minutes(minutes), m_secondes(secondes)
{
}
bool Duree::operator==(Duree const& b) const
{
    return estEgal(b);
}
bool Duree::operator!=(Duree const& b) const
{
    return !(estEgal(b));
}
bool Duree::operator<(Duree const& b) const
{
    return estPlusPetitQue(b);
}
bool Duree::operator>(Duree const& b) const
{
    return !(estPlusPetitQue(b));
}
bool Duree::operator<=(Duree const& b) const
{
    return InfEgale(b);
}
bool Duree::operator>=(Duree const& b) const
{
    return supEgale(b);
}
Duree Duree::operator+(Duree const& b)
{
    Duree res;
res = addition(b);
return res;
}
void Duree::affiche() const
{
    cout << "H-M-S : (" << m_heures << ":" << m_minutes << ":" << m_secondes << ")" << endl;
}


//----------intermediated function-----------------
Duree Duree::addition(Duree const& b)
{
    Duree res;
    res.m_heures = m_heures + b.m_heures;
    int tmp = m_minutes + b.m_minutes;
    if(tmp >= 60)
    {
        res.m_heures += tmp / 60;
        res.m_minutes = tmp % 60;
    }
    else
        res.m_minutes = tmp;
    tmp = m_secondes + b.m_secondes;
    if(tmp >= 60)
    {
        res.m_minutes += tmp / 60;
        res.m_secondes = tmp % 60;
    }
    else
        res.m_secondes = tmp;
    return res;
}
bool Duree::InfEgale(Duree const& b) const
{
    if(m_heures < b.m_heures)
        return true;
    else if(m_heures == b.m_heures && m_minutes < b.m_minutes)
        return true;
    else if(m_heures == b.m_heures && m_minutes == b.m_minutes && m_secondes <= b.m_secondes)
        return true;
    else
        return false;
}
bool Duree::supEgale(Duree const& b) const
{
    if(m_heures > b.m_heures)
        return true;
    else if(m_heures == b.m_heures && m_minutes > b.m_minutes)
        return true;
    else if(m_heures == b.m_heures && m_minutes == b.m_minutes && m_secondes >= b.m_secondes)
        return true;
    else
        return false;
}
bool Duree::estPlusPetitQue(Duree const& b) const
{
    if(m_heures < b.m_heures)
        return true;
    else if(m_minutes < b.m_minutes)
        return true;
    else if(m_secondes < b.m_secondes)
        return true;
    else
        return false;
}
bool Duree::estEgal(Duree const& b) const
{
    return (m_heures == b.m_heures && m_minutes == b.m_minutes && m_secondes == b.m_secondes);
}
