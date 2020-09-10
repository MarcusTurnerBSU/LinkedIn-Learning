/*
#include <cstdio>
using namespace std;

class A {
    int _value = 0;
public:
    void setv(const int a) { _value = a; };
    int getv() { return _value; };
};

int main() {
    A a;
    a.setv(42);
    printf("a is %d\n", a.getv());
    //this doesn't qualify as const, needs the value const in public
    //const A b = a;
    A b = a;
    printf("a is %d\n", b.getv());

    return 0;
}
*/