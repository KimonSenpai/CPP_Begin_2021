#include <iostream>
#include <string>
#include <vector>
using std::vector;
using std::string;
using std::cout;

class Person {
/*private:
    int a;
protected:
    int salary;
    */
public:
    string name;
    string passport;
    int age;
    Person(string name, string passport, int age): name(name), passport(passport), age(age)
    {}
    virtual void Print() {
        cout << name << "\tPassport: " << passport << "\tAge: " << age << '\n';
    }
};


class Student: public Person {
public:
    int math, phys, inf;
    Student(string name, string passport, int age, int m, int ph, int i): Person(name, passport, age), math(m), phys(ph), inf(i)
    {}
    void Print() {
        cout << name << "\tPassport: " << passport << "\tAge: " << age << '\n';
        cout << "M.: " << math << "\tPh.: " << phys << "\tI.: " << inf << '\n';
    }
};


int main() {
    //Student stud;
    vector<Person*> p(3);
    p[0] = new Person{"Ivanov I.I.", "1254 234765", 21};
    p[1] = new Student{"Petrov P.P.", "4628 263482", 19, 5, 3, 5};
    p[2] = new Student{"Sidorov S.S.", "4286 358252", 20, 4, 4, 4};

    for(auto v: p) {
        v->Print();
    }
}