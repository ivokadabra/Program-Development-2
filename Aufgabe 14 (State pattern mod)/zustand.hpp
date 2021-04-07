using namespace std;
 #include <iostream>

 #ifndef _ZUSTAND_HPP
#define _ZUSTAND_HPP


class Automat;
class Zustand{
    protected:
    Automat *a;
    Zustand();
    public:
 void setZustand(Zustand *z);
 Zustand(Automat *automat);
 virtual void bearbeiten()=0;
};

class Angebot : public Zustand{
    public:
    Angebot(Automat *automat);
   void bearbeiten();
};

class NichtFretig : public Zustand{
    public:
      NichtFretig(Automat *automat);
      void bearbeiten();
};

class Ruckgabe : public Zustand{
public:
 Ruckgabe(Automat *automat);
 void bearbeiten();
};

#endif
