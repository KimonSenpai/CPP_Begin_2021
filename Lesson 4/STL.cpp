#include <iostream>


//standart template libruaries
#include <stack>
#include <queue>
#include <deque>

#include <array>
#include <vector>

#include <set>
#include <map>
using namespace std;

int main() {
    stack<int> s;
    s.size();//кол-во элементов
    s.empty();
    s.push(5);//вставка
    s.top();//значение верхнего элемента
    s.pop();//удалить верхний элемент

    queue<int> q;
    q.front();//first elem
    
    deque<int> d;

    const int N = 10;
    array<int, N> ar;
    ar.size();
    ar[2] = 5;

    vector<int> v;
    vector<int> vv(10);
    vector<double> w(10, 1);
    w[3] = 5;
    w.push_back(7);//добавить элемент 7 в конец вектора w
    w[w.size() - 1] = 8;
    w.back() = 8;
    w.shrink_to_fit();//убирает лишнюю память
    w.resize(5, 70);//перераспределяет массив на 5 элементов со значениями 70
    w.reserve(20);//дополнительно выделенная память
    //w.insert, w.erase;

    set<int> st;
    st.insert(7);
    st.erase(9);
    st.count(7);//0 - 7 нет, 1 - 7 есть

    map<int, double> m;
    m[100] = 3.5;//создается элемент с индексом 100, получает значение 3.5


    vector<double>::iterator p = w.begin();
    *(p + 5) = 7;
    w.end();
    for(auto& elem: w)
        elem = 0;
    
    for(auto p = begin(w); p != end(w); p++) {
        auto& elem = *p;
        elem = 0;
    }

    auto qq = 7ull;

    for(auto elem: m) {
        cout << elem.first << ' ' << elem.second << '\n';
    }

    w.insert(w.begin() + 3, 7);
    w.insert(w.begin() + 2, {5, 6, 7});
    w.erase(w.begin()+2);
}