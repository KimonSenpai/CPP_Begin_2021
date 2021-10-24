#include <iostream>
using namespace std;

template<typename T>
class queue {
    struct node {
        T value;
        node* next;
        node* prev;

        node(T val) {
            value = val;
            prev = next = nullptr;
        }
    };

    node* beg;
    node* end;
    size_t _size;

public: 
    queue() {
        beg = end = nullptr;
        _size = 0;
    }

    void push(T val) {
        if(_size == 0) {
            beg = end = new node(val);
        } else {
            end->next = new node(val);
            end->next->prev = end;
            end = end->next;
        }
        _size++;
    }

    void pop() {
        if(_size == 0) 
            throw 1;
        if(_size == 1) {
            delete beg;
            beg = end = nullptr;
        } else {
            beg = beg->next;
            delete beg->prev;
            beg->prev = nullptr;
        }
        _size--;
    }

    T top() {
        return beg->value;
    }
};

int main() {
    queue<int> q;
    q.push(2);
    q.push(3);
    q.push(4);
    cout << q.top() << '\n';
    q.pop();
    cout << q.top() << '\n';
    q.pop();
    cout << q.top() << '\n';
    q.pop();
}