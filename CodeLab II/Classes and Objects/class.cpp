/*
#include <cstdio>
using namespace std;

// a very simple class
//can use struct key word but would need private keyword 
//lines 7 - 13 would be in a .h file
class c1 {
    int i = 0;
public:
    //methods - is another name for these
    void setvalue(const int& value) { i = value; }
    int getvalue() const { return i; }
};

//implementations would be in a .cpp file
void c1::setvalue(const int& value) { 
    i = value; }
int c1::getvalue() const { 
    return i;
}

//in the main .cpp file
int main() {
    const int i = 47;
    c1 o1;
    o1.setvalue(i);
    printf("value is %d\n", o1.getvalue());
    return 0;
}
*/