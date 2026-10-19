#include <iostream>
#include <cmath>
using namespace std;
int main() {
// float
    float a = 1000;
    float b = 0.0001;

    float c = pow(a-b, 3);
    float d = pow(a, 3);
    float e = pow(a, 2);
    float f = 3*e*b;
    float g = pow(b, 2);
    float h = pow(b, 3);
    float i = 3*a*g;
    float chisl = c - (d +f);
    float znam = h - i;
    float rez = chisl/znam;

    cout << "Float: " << rez << endl;

// double
    float a1 = 1000;
    float b1 = 0.0001;

    float c1 = pow(a1-b1, 3);
    float d1 = pow(a1, 3);
    float e1 = pow(a1, 2);
    float f1 = 3*e1*b1;
    float g1 = pow(b1, 2);
    float h1 = pow(b1, 3);
    float i1 = 3*a1*g1;
    float chisl1 = c1 - (d1 +f1);
    float znam1 = h1 - i1;
    float rez1 = chisl1/znam1;

    cout << "Double: " << rez1 << "\n";

    return 0;

}
