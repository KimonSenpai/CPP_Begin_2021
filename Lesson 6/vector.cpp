#include <iostream>
using namespace std;

template<typename T>
class vector {
private:
    T* buf;
    size_t _size, _capacity;
public:
    vector() {
        _size = 0;
        _capacity = 0;
    }
    
    vector(size_t n) {
        buf = new T[n];
        _size = _capacity = n;
    }

    T& operator[](size_t i) {
        if(i >= _size)
            throw 1;
        
        return buf[i];
    }

    void push_back(T v) {
        if(_capacity == 0) {
            _capacity = 1;
            buf = new T[1];
        } else if(_size == _capacity) {
            _capacity *= 2;
            T* bbuf = new T[_capacity];
            for(size_t i = 0; i < _size; i++) {
                bbuf[i] = buf[i];
            }
            delete[] buf;
            buf = bbuf;
        }
        buf[_size] = v;
        _size++;
    }
    
    size_t size() {
        return _size;
    }

    size_t capacity() {
        return _capacity;
    }

    ~vector() {
        if(_capacity != 0)
            delete[] buf;
    }
};


int main() {
    vector<int> mas;
    //mas._capacity = 2;
    mas.push_back(5);
    cout << mas[0] << '\n';
    int a = 5;
   
 
}