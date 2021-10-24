#include <iostream>
using std::cin;
using std::cout;

//pattern singleton
class Console {
private:
    Console() {}
    static Console* obj;
public:
    static Console* Create() {
        if(!obj) 
            obj = new Console();
        return obj;
    }
    int ScanInt() {
        int v;
        cin >> v;
        return v;
    }

    void PrintInt(int val) {
        cout << val;
    }

    //friend Console* CreateObj(); //даёт тоступ к приватной секции.
};
/*
Console* obj = nullptr;
Console* CreateObj() {
    if(obj == nullptr)
        obj = new Console();
    return obj;
}
*/



int c = 5;
int main() {
    /*Console* c = CreateObj();
    Console* d = CreateObj();*/
    Console* c = Console::Create();
    //:: - scope resolution operator
    c->PrintInt(::c);
}