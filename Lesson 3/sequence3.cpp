#include <iostream>

using namespace std;

int* mas;
void f(int n, int i) {
    if(n == 0) {
        //cout << n << ' ' << i << "\n\n-------------------\n";
        for(int j = 0; j < i; j++){
            cout << mas[j];
        }
        cout << '\n';
        return;
    }

    for(int d = 1; d <= 3; d++){
        mas[i] = d;
        f(n-1, i+1);
    }
}

int main() {
    int n;
    cin >> n;
    mas = new int[n];
    f(n, 0);
}