#include <iostream>
using namespace std;
//5 7 3 5 0
int main() {
    int sum = 0;
    //I
    for(;;) { //while(true)
        int val;
        cin >> val;
        if(!val) break;

        sum += val;
    }

    //II
    int a;
    cin >> a;
    while(a != 0) {
        sum += a;
        cin >> a;
    }
}

/*
ввести
проверить на 0
прибавить
ввести
проверить на 0
прибавить
ввести
проверить на 0
прибавить
*/