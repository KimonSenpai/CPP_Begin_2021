
namespace A {
    int a, b, c;
}

namespace B {
    int a,b;

    namespace C {
        int a, c;
    }
}

namespace A {
    int d;
}
int a;

//using namespace A;
int main() {
    A::a = 3;
    B::a = 4;
    B::C::a = 5;
    ::a = 6;
    a = 7;
}