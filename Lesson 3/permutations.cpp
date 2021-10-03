#include <iostream>

using namespace std;

int* mas;
bool* flags;
void f(int i, int n) {
    if(n == i) {
        for(int j = 0; j < i; j++){
            cout << mas[j];
        }
        cout << '\n';
        return;
    }

    for(int j = 1; j <= n; j++) {
        if(!flags[j]) {
            flags[j] = true;
            mas[i] = j;
            f(i+1, n);
            flags[j] = false;
        }
    }
}

int main() {
    int n;
    cin >> n;
    mas = new int[n];
    flags = new bool[n + 1]{};
    f(0, n);
}