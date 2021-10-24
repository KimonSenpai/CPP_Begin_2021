#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

struct Vector;
Vector operator+(Vector l, Vector r);
struct Vector {
    double x, y;

    double abs() {
        return sqrt(x*x + y*y);
    }

    void assign(double x, double y) {
        this->x = x; //this->x == (*this).x
        this->y = y;
    }

    //ctor
    Vector() {
        assign(0, 0);
    }
    Vector(double x, double y) {
        assign(x, y);
    }

    Vector(const Vector& v) {
        *this = v;
    }

    //dtor
    ~Vector() {

    }

    //operators overloading
    const Vector& operator=(const Vector& r) {
        x = r.x;
        y = r.y;
        return r;
    }

    Vector operator-() {
        return Vector(-x, -y);
    }

    Vector operator-(Vector r) {
        //return Vector(x - r.x, y - r.y);
        return *this + -r;
    }
};

Vector operator+(Vector l, Vector r) {
    return Vector(l.x + r.x, l.y + r.y);
}

ostream& operator<<(ostream& out, const Vector& v) {
    out << '(' << v.x << ", " << v.y << ')';
    return out;
}

int main() {
    Vector p;

    cin >> p.x >> p.y;
    cout << p.abs() << '\n';


    Vector q(3, 5);
    Vector r = q; //copy constructor
    r = p + q + r;

    p = -q;//q.operator-();
    q = p - r;//p.operator-(r);
    p = p + r;//operator+(p, r);

    cout << p << '\n' << q << '\n';
    /*q.x = 3;
    q.y = 5;
    q.assign(3, 5);*/

    vector<int> v;
    
}