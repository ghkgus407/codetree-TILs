#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    double a,b,c,d,e,f;
    a=30.48;
    b=160934;

    c=9.2;
    d=1.3;

    cout << fixed, cout.precision(1);
    e=a*c;
    cout << fixed, cout.precision(1);
    f=b*d;

    cout << c << "ft = " << e << "cm" << endl;
    cout << d << "mi = " << f << "cm" << endl;


    return 0;
}