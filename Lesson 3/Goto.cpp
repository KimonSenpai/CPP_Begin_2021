#include <iostream>
using namespace std;



int main() {
    int n;
    cin >> n;
    for(;;) {
        //bool f = false;
        for(int d = 2; d*d <= n; d++) {
            if(n % d == 0) {
                //f = true;
                //break;
                goto la;
            }
        }
        //if(f) break;
        n++;
    }
la:
    cout << n;
}