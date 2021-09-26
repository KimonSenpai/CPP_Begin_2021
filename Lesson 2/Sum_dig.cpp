#include <iostream>
using namespace std;

int main() {
    unsigned n; //unsigned int
    cin >> n;
    unsigned sum = 0;

    while(n > 0) {
        int dig = n % 10;
        n /= 10;
        sum += dig;
    }

    //s -= n; s = s - n
    //a++, ++a

    cout << sum;

}