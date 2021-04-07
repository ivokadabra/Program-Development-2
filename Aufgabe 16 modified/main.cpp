
#include <iostream>
using namespace std;
#include "observer.hpp"

int main()
{
   Stack *h = new Stack();
Counter b(h);
Logger l(h);
h->insert(12);
h->insert(11);
h->insert(13);
h->insert(5);
h->insert(6);
b.aktualisiere();
l.aktualisiere();

    return 0;
}
