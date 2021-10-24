#include <map>
#include <cmath>
using std::max;
using std::map;
/*
F(0) = 0
F(1) = 1
F(n) = F(n-1) + F(n-2)
*/
/*
n       0   1   2   3   4   5   6
----------------------------------
F(n)    0   1   1   2   3   5   8
*/

int F(int n) { //O(1.6^n)
    if(n < 2)
        return n;
    return F(n-1) + F(n-2);
}

int F_mas(int n) { //O(n)
    int* mas = new int[max(n + 1, 2)]{0, 1};
    for(int i = 2; i <= n; i++) {
        mas[i] = mas[i-1] + mas[i-2];
    }

    int res = mas[n];
    delete[] mas;
    return res;
}


int F_memo(int n) {//memorization
    static map<int, int> memo;
    if(memo.count(n)){
        return memo[n];
    }
    if(n < 2){
        memo[n] = n;
        return n;
    }
    int res = F(n-1) + F(n-2);
    memo[n] = res;
    return res;
}
