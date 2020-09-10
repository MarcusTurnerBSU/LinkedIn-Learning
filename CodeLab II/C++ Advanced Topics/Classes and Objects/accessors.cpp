/*
#include <cstdio>
using namespace std;

//use class for data members and use struct for function members
class A {
    //private data members
    int ia = 0;
    const char* sb = "";
    int ic = 0;
public:
    A(const int a, const char* b, const int c) : ia(a), sb(b), ic(c) {};
    //setters - used for setting the values
    void seta(const int a) { ia = a; }
    void setb(const char* b) { sb = b; }
    void setc(const int c) { ic = c; }
    //getters - used to get those values
    int geta() const { return ia; }
    const char* getb() const { return sb; }
    int getc() const { return ic; }
};

int main() {
    A a(1, "two", 3);
    printf("ia is %d, sb is %s, ic is %d\n", a.geta(), a.getb(), a.getc());
    return 0;
}
*/