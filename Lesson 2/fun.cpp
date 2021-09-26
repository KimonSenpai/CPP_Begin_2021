#include <iostream>
using namespace std;

int main() {
    volatile int a = 0, b = 1, c = 2;
    //cout << &b << '\n';
    volatile int* p = &a + (&c - &a)/2;
    *p = 4;
    cout << a << b << c; 

}