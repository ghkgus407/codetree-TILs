#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a=5;
    int b=6;
    int c=7;
    int temp_1;
    int temp_2;

    temp_1=a;
    temp_2=b;
    a=c;
    b=temp_1;
    c=temp_2;

    cout << a << endl;
    cout << b << endl;
    cout << c; 

    return 0;
}