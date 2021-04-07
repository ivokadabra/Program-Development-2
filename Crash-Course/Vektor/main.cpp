#include <iostream>
#include "vec2d.hpp"
using namespace std;

bool test01() {
    Vektor a(1, 2);
    Vektor b(2, 3);
    Vektor c = a + b;

    if (c != Vektor(3, 5))
        return false;
    return true;
}

bool test02() {
    Vektor a(1, 2);
    Vektor b(2, 3);
    Vektor c = a - b;

    if (c != Vektor(-1, -1))
        return false;
    return true;
}
bool test03() {
    Vektor a(1, 2);
    Vektor b(2, 3);
    Vektor c = a * b;

    if (c != Vektor(2, 6))
        return false;
    return true;
}
bool test04() {
    Vektor a(4, 6);
    Vektor b(2, 3);
    Vektor c = a / b;

    if (c != Vektor(2, 2))
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




    return 0;
}
