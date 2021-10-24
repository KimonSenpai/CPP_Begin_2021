#include <iostream>
using std::cout;

const double PI = 3.14159265;
class Figure {
public:
    virtual double Perimeter() = 0; //чистая функция
    virtual double Square() = 0;
};

class Circle: public Figure {
private:
    double R;
public:
    Circle(double R): R(R) {}
    double Perimeter() {
        return 2*PI*R;
    }

    double Square() {
        return PI*R*R;
    }
};

class Rectangle: public Figure {
private:
    double w, h;
public:
    Rectangle(double a, double b): w(a), h(b) {}
    double Perimeter() {
        return 2*(w + h);
    }

    double Square() {
        return w*h;
    }
};


int main() {
    Figure* mas[] = {   new Rectangle(3, 5), 
                        new Rectangle(9, 7), 
                        new Circle(6), 
                        new Circle(1)};

    for(auto p: mas) {
        cout << p->Perimeter() << ' ' << p->Square() << '\n';
    }

}