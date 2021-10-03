#include <iostream>
using namespace std;
int add(int, int);
void print(int a);
void swap(int& left, int& right);
int Max1(int* mas, size_t n);
int Max2(int* beg, int* end);
int x;

int main() {

    int x = 5, y = 7;
    cout << add(x, y) << '\n';
    swap(x, y);
    int globalX = ::x; //scope resolution operator
    cout << x << ' ' << y << '\n';

    int mas[7] = {1, 3, 2, 7, 4, 6, 8};
    int res1 = Max1(mas, 7);
    int res2 = Max2(mas, mas + 7);
    cout << res1 << ' ' << res2 << '\n';
    return 0;
}

int add(int a, int b) {
    return a + b;
}

void print(int a) {
    cout << a;
}

void swap(int& a, int& b) {
    int tmp = a;
    a = b;
    b = tmp;
}

int Max1(int* mas, size_t n) {
    int res = mas[0];
    for(int i = 1; i < n; i++)
        res = max(res, mas[i]);
    return res;
}

int Max2(int* beg, int* end) {
    int res = *beg;
    for(int* p = beg+1; p < end; p++) 
        res = max(res, *p);
    return res;
}