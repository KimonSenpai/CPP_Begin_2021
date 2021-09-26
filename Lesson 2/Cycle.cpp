#include <iostream>
using namespace std;

int main() {
    /*
    while(<условие>) <блок>
    */
    int n;
    cin >> n;
    int r = 0;
    while(n >= 5) {
        n -= 5;
        r += 1;
    }
    cout << r;
    /*
    do
        <блок>
    while(<условие>);
    */
    int k;

    do {
        cout << "Input even number>>";
        cin >> k;
    } while(k%2 != 0);

    // break - прекращение цикла
    //continue - переход на следующую итерацию

    /*
    for(<1 действие>;<условие>;<итерация>)
        <блок>
    */

    int n;
    cin >> n;
    int sum;
    for(int i = 1; i <= n; i++)
        sum += i;

    int i = 1;
    while(i <= n) {
        sum += i;
        i++;
    }

    for(;;);

}