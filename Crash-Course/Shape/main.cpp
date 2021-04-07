#include <iostream>
#include "picture.hpp"
using namespace std;
#include <vector>


bool test01() {
Vektor<double> a(1.0, 2.0);
Vektor<double> b(2.0, 3.0);
Vektor<double> c(8.0, 3.0);
Polygon<double> p;
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
Polygon<double> p;
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
Polygon<int> m;
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

bool test05() {
  Vektor<int> a(9, 0);
Vektor<int> b(5, 4);
Vektor<int> c(10, 8);
Polygon<int> m;
m.setPoint(a);
m.setPoint(b);
m.setPoint(c);
m.circumference();

    if (m.circumference()!=19)
        return false;
    return true;

}bool test06() {
   Vektor<int> dd(1, 0);
Rektagle<int> rr(dd,4,5);
if (rr.area()!=20)
        return false;
    return true;
}

bool test07() {
Vektor<double> aa(9.0, 0.0);
Vektor<double> bb(5.0, 4.0);
Vektor<double> cc(10.0, 8.0);
Polygon<double>p;
p.setPoint(aa);
p.setPoint(bb);
p.setPoint(cc);
if (p.area()!=18)
        return false;
    return true;
}

bool test08() {
 Vektor<double> aaa(9.0, 0.0);
Vektor<double> bbb(5.0, 4.0);
Vektor<double> ccc(10.0, 8.0);
Triangle<double>l(aaa,bbb,ccc);
if (l.area()!=18)
        return false;
    return true;
}
bool test09() {
Vektor<double> aaa(9.0, 0.0);
Circle<double>cir(aaa,5);
if (cir.area()<78 || cir.area()>79)
        return false;
    return true;
}
bool test10() {
Vektor<double> aaa(9.0, 0.0);
Quadrat<double>q(aaa,5);
if (q.area()!=25)
        return false;
    return true;
}
bool test11() {

Vektor<double> aaa(9.0, 0.0);
Vektor<double> bbb(5.0, 4.0);
Vektor<double> ccc(10.0, 8.0);
Picture<double> pi;
pi.add(new Rektagle<double>(aaa,4,5));
pi.add(new Circle<double>(aaa,5));
pi.add(new Triangle<double>(aaa,bbb,ccc));
pi.add(new Quadrat<double>(aaa,5));

if (pi.getArea()<141 || pi.getArea()>142)
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
    if (test05())
        cout << "test05 passed" << endl;
    else cout << "test05 failed!!!!" << endl;

    if (test06())
        cout << "test06 passed" << endl;
    else cout << "test06 failed!!!!" << endl;

    if (test07())
        cout << "test07 passed" << endl;
    else cout << "test07 failed!!!!" << endl;

    if (test08())
        cout << "test08 passed" << endl;
    else cout << "test08 failed!!!!" << endl;
    cout << endl;

    if (test09())
        cout << "test09 passed" << endl;
    else cout << "test09 failed!!!!" << endl;

    if (test10())
        cout << "test10 passed" << endl;
    else cout << "test10 failed!!!!" << endl;
    cout << endl;

      if (test11())
        cout << "test11 passed" << endl;
    else cout << "test11 failed!!!!" << endl;
    cout << endl;

try{
//////Polygon/////
Vektor<int> a(9, 0);
Vektor<int> b(5, 4);
Vektor<int> c(10, 8);
Polygon<int> m;
m.setPoint(a);
m.setPoint(b);
m.setPoint(c);
double probe=m.circumference();
cout<<"Here ist first Polygon"<<probe<<endl;
////////Rektagle//////
Vektor<int> dd(1, 0);
Rektagle<int> rr(dd,4,5);
cout<<"Here is Rektagle:"<<rr.area()<<endl;


///////Polygon//////
Vektor<double> aa(9.0, 0.0);
Vektor<double> bb(5.0, 4.0);
Vektor<double> cc(10.0, 8.0);
Polygon<double>p;
p.setPoint(aa);
p.setPoint(bb);
p.setPoint(cc);
cout<<"Here is Second Polygon:"<<p.area()<<endl;

/////////Triangle/////
Vektor<double> aaa(9.0, 0.0);
Vektor<double> bbb(5.0, 4.0);
Vektor<double> ccc(10.0, 8.0);
Triangle<double>l(aaa,bbb,ccc);

cout<<"Here is Triangle: "<<l.area()<<endl;

/////////Circle////////
Circle<double>cir(aaa,5);
cout<<"Here is Circle: "<<cir.area()<<endl;


Quadrat<double>q(aaa,5);
cout<<"Here is Quadrat:"<<q.area()<<endl;
///////Picture///////
Picture<double> pi;
pi.add(new Rektagle<double>(aa,4,5));
pi.add(new Circle<double>(aaa,5));
pi.add(new Triangle<double>(aaa,bbb,ccc));
pi.add(new Quadrat<double>(aaa,5));
cout<<pi.getArea()<<endl;


}catch(const char *c){
    cout<<c<<endl;
}


    return 0;
}
