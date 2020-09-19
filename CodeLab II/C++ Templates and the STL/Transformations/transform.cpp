#include <iostream>
#include <vector>
#include <algorithm>
#include "rational.h"
using namespace std;

template <typename T>
class accum {
    T _acc = 0;
    accum() {}
public:
    accum(T n) : _acc(n) {}
    T operator() (T y) { _acc += y; return _acc; }
};

template <typename T>
void disp_v(vector<T>& v) {
    if (!v.size()) return;
    for (T e : v) { cout << e << " "; }
    cout << endl;
}

ostream& operator << (ostream& o, const Rational& r) {
    return o << string(r);
}

int main()
{
    accum<Rational> x(Rational(3,5);
    //accum<Rational> x(7);
    //accum<int> x(7);
    cout << x(7) << endl;

    vector<Rational> v1 = { 1, 2, 3, 4, 5 };
    //vector<int> v1 = { 1, 2, 3, 4, 5 };
    disp_v(v1);

    vector<Rational> v2(v1.size());
    //vector<int> v2(v1.size());
    transform(v1.begin(), v1.end(), v2.begin(), x);

    disp_v(v2);

    return 0;
}