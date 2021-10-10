#include <iostream>
using namespace std;

void rev(int* mas, int i, int j) { //reverse [i, j] elements
    while(i < j) { 
        swap(mas[i], mas[j]);
        i++;
        j--;
    }
}

int main() {
    int n;
    cin >> n;
    int* mas = new int[n];
    for(int i = 0; i < n; i++)
        cin >> mas[i];

    rev(mas, 1, n-2);
    for(int i = 0; i < n; i++)
        cout << mas[i] << ' ';
    cout << '\n';
}