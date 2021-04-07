
#ifndef _AUTOMAT_HPP
#define _AUTOMAT_HPP



#include <iostream>
#include "zustand.hpp"
using namespace std;
class Automat{
    friend class Zustand;
    private:
    Zustand *_z;
    public:
    Automat();
    void setZustand(Zustand *z);
    void aktualisieren();
};

#endif
