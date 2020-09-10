/*
#include <cstdio>
using namespace std;
//doesn't define any constructors or destructors - called implicit constructors
// a very simple class
class c1 {
    int i = 0;
public:
    void setvalue(const int& value) { i = value; }
    int getvalue() const { return i; }
};

int main() {
    const int i = 47;
    c1 o1;
    o1.setvalue(i);
    printf("value is %d\n", o1.getvalue());

    //implicit constructor - has not been defined
    c1 o2 = o1;
    printf("value is %d\n", o2.getvalue());

    //implicit copy operator
    o1.setvalue(72);
    o2 = o1;
    printf("value is %d\n", o2.getvalue());
    printf("value is %d\n", o2.getvalue());

    return 0;
}
*/