#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

template <typename T>
bool gtcomp(const T& lh, const T& rh) {
    return lh > rh;
}

template <typename T>
void disp_v(const T& v) {
    if (!v.size()) return;
    for (auto e : v) { cout << e << " "; }
    cout << endl;
}

int main() {
    int n = 47;

    // prime numbers < 100
    vector<int> v1 = { 83, 53, 47, 23, 13, 59, 29, 41, 19, 71, 31, 67, 11, 2, 97, 7, 61, 73, 3, 79, 37, 43, 17, 5, 89 };
    disp_v(v1);

    sort(v1.begin(), v1.end());
    disp_v(v1);
    /*
    sort(v1.begin(), v1.end(), gtcomp<int>);
    disp_v(v1);
    */

    cout << "searching for " << n << " ... ";

    //if (binary_search(v1.begin(), v1.end(), n, gtcomp<int>)) {
    if (binary_search(v1.begin(), v1.end(), n)) {
        cout << "found ";
    }
    else {
        cout << "not found";
    }
    cout << endl;

    auto it = lower_bound(v1.begin(), v1.end(), n);
    cout << "lower bound: " << *it << endl;

    it = upper_bound(v1.begin(), v1.end(), n);
    cout << "upper bound: " << *it << endl;

    auto pr = equal_range(v1.begin(), v1.end(), n);
    cout << "lower bound: " << *pr.first << endl;
    cout << "upper bound: " << *pr.second << endl;

    return 0;
}