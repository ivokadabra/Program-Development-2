
#include <iostream>
using namespace std;

class Kaffe{

    public:
    virtual int getSum()=0;
};


class Expresso:public Kaffe{
    int praise=3;
    public:
    int getSum();
};

class Homemade:public Kaffe{
    int praise=2;
    public:
    int getSum();
};
class Dunkel:public Kaffe{
    int praise=1;
    public:
    int getSum();
};

class Dekorrier:public Kaffe{
    protected:
    Kaffe *delegate;
    public:
    Dekorrier(Kaffe *k);
    virtual int getSum()=0;
};

class Zuker:public Dekorrier{
  private:
  int praise=1;
  public:
   Zuker(Kaffe *k);
  int getSum();
};

class Milk:public Dekorrier{
  private:
  int praise=2;
  public:
   Milk(Kaffe *k);
  int getSum();
};







