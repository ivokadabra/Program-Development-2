#include <iostream>
#include "list.h"
using namespace std;

int main()
{

Heap h(5);

h._insert(10);
h._insert(7);
h._insert(3);
h._insert(2);
h._insert(1);

h.toScreen();
//h.extractMin();
int n=h.extractMin();
cout << endl<<"the minimum is : "<<n<<endl;


cout<<endl;

cout<<endl;
if (h.test01()!=0)
 cout <<"test Number 1 is passed";

 else cout<<"test Number 1  is not passed";
 cout<<endl;

 if (h.test02()!=0)
  cout<<"test Number 2 is passed";

 else cout<<"test  Number 2 is not passed";
 cout<<endl;


if (h.test03()!=0)
 cout<<"test Number 3 is passed";

 else cout<<"test Number 3 is not passed";
    return 0;


   return 0;
}
