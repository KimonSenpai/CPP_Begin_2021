#include <iostream>
using namespace std;

void rev(int* mas, int i, int j) { //reverse [i, j) elements
    j--;
    while(i < j) { 
        swap(mas[i], mas[j]);
        i++;
        j--;
    }
}

void bad_shift(int* mas, int n, int p) { //T(n) ~ O(n^2)
    p %= n; //p = p % n
    if(p < 0) p += n;

    for(int i = 0; i < p; i++) {
        int last = mas[n-1];
        for(int j = n-1; j > 0; j--)
            mas[j] = mas[j - 1];
        mas[0] = last;
    }
}

void good_shift(int* mas, int n, int p) { //T(n) = O(n)
    p %= n; //p = p % n
    if(p < 0) p += n;
    rev(mas, 0, n - p);
    rev(mas, n - p, n);
    rev(mas, 0, n);
}

int main() {
    int mas[] = {1, 2, 3, 4, 5};

    good_shift(mas, 5, 3);

    for(int v: mas) {
        cout << v << ' ';
    }
    cout << '\n';
}