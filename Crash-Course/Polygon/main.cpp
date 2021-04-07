#include <iostream>
#include "polygon.hpp"
using namespace std;

bool test01() {
Vektor<double> a(1.0, 2.0);
Vektor<double> b(2.0, 3.0);
Vektor<double> c(8.0, 3.0);
Polygon<double> p(3);
p.setPoint(a);
p.setPoint(b);
p.setPoint(c);

if(p.circumference()>14 || p.circumference()<15){
return true;
   }return false;
}

bool test02() {
Vektor<double> a(1.0, 2.0);
Vektor<double> b(2.0, 3.0);
Vektor<double> c(8.0, 3.0);
Polygon<double> p(3);
p.setPoint(a);
p.setPoint(b);
p.setPoint(c);
    if (p.getPoint(0) != Vektor<double>(1.0, 2.0))
        return true;
    return false;
}
bool test03() {
   Vektor<int> a(1, 0);
Vektor<int> b(5, 4);
Vektor<int> c(-3, 8);
Polygon<int> m(3);
m.setPoint(a);
m.setPoint(b);
m.setPoint(c);
    if (m.area()!=24)
        return false;
    return true;
}
bool test04() {
    Vektor <int> a(4, 6);
    Vektor <int>b(2, 3);
    Vektor <int>c = a / b;

    if (c != Vektor<int>(2, 2))
        return false;
    return true;
}


int main()
{

    if (test01())
        cout << "test01 passed" << endl;
    else cout << "test01 failed!!!!" << endl;

    if (test02())
        cout << "test02 passed" << endl;
    else cout << "test02 failed!!!!" << endl;

    if (test03())
        cout << "test03 passed" << endl;
    else cout << "test03 failed!!!!" << endl;

    if (test04())
        cout << "test04 passed" << endl;
    else cout << "test04 failed!!!!" << endl;
    cout << endl;

try{
Vektor<double> a(1.0, 2.0);
Vektor<double> b(2.0, 3.0);
Vektor<double> c(8.0, 3.0);
//Vektor<double> d (5.0,7.0);
Polygon<double> p(3);
p.setPoint(a);
p.setPoint(b);
p.setPoint(c);
//p.setPoint(d);
cout<<p.getPoint(0)<<endl;
cout<<p.circumference()<<endl;
}catch(const char *c){
    cout<<c<<endl;
}
try{
Vektor<int> a(1, 0);
Vektor<int> b(5, 4);
Vektor<int> c(-3, 8);
Polygon<int> m(3);
m.setPoint(a);
m.setPoint(b);
m.setPoint(c);
double probe=m.area();
cout<<probe<<endl;

}catch (const char *c){
    cout<<c<<endl;
}
    return 0;
}
