#include <iostream>
using namespace std;

int main() {
    //static array
    const int N = 5;
    int mas[N];

    for(int i = 0; i < N; i++) {
        cin >> mas[i];//mas[i] ~> *(mas + i)
    }
    for(int i = N-1; i >= 0; i--) {
        cout << i[mas] << ' ';
    }
    cout << '\n';


    //dynamic array
    int n;
    cin >> n;
    int* mas2 = new int[n];

    //....

    delete[] mas2;
}
