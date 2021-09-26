#include <iostream>
using namespace std;

int main() {

    int a = 5;
    int* b = &a;
    cout << &b << '\n';
    cout << b << '\t' << b+1 << '\n';
    cout << *b << "\t\t" << *(b+1) << '\n'; //разыминование
    cout << sizeof(int*) << '\n';
}