#include <iostream>
using namespace std;

int F(int n);
int pow(int a, int n);

template<typename T>
void swap(T& a, T& b) {
    T tmp = a;
    a = b;
    b = tmp;
}


int main() {
    int n;
    cin >> n;
    cout << F(n) << '\n';
}

int F(int n) {
    if(n < 2)
        return n;

    return F(n - 1) + F(n - 2);
}

int pow(int a, int n) {
    if(n == 0) return 1;

    if(n % 2 == 0) {
        return pow(a*a, n/2);
    } else {
        return pow(a*a, n/2)*a;
    }
}