#include <iostream>
#include <algorithm>
using namespace std;


void Sort(int* beg, int* end) { //[beg, end), O(n^2)
    for(int* p = beg; p < end; p++) {
        for(int* q = p + 1; q < end; q++) {
            if(*q < *p) {
                swap(*p, *q);
            }
        }
    }
}
const int N = 5;
int main() {
    int mas1[N] = {5, 1, 3, 4, 2};
    int mas2[N] = {5, 1, 3, 4, 2};

    Sort(mas1, mas1 + N);
    sort(mas2, mas2 + N); //O(n*log(n))

    for(int v: mas1) {
        cout << v << ' ';
    }
    cout << '\n';

    for(int v: mas2) {
        cout << v << ' ';
    }
    cout << '\n';
}