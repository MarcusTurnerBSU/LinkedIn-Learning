#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

template <typename T>
void disp_v(const T& v) {
    if (!v.size()) return;
    for (auto e : v) { cout << e << " "; }
    cout << endl;
}

int main() {
    // prime numbers < 100
    vector<int> v1 = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97 };
    vector<int> v2(v1.size(), 0);
    disp_v(v1);
    disp_v(v2);

    copy(v1.begin(), v1.end(), v2.begin());
    /*
    random_shuffle(v1.begin(), v1.end(), [](int i)->int { return rand() % i; });
    disp_v(v1;
    */
    /*
    random_shuffle(v1.begin(), v1.end());
    disp_v(v1;
    */
    /*
    generate(v2.begin(), v2.end(), []()->int {return rand() % 100; });
    disp_v(v2;
    */
    /*
    fill_n(v1.begin(), v1.end(), 15, 100);
    disp_v(v1;
    */
    /*
    fill(v1.begin(), v1.end(), v2.begin() - 10, 100);
    disp_v(v1;
    */
    /*
    reverse(v1.begin(), v1.end());
    disp_v(v1);
    reverse, reverses elements in place so no need for target "v2.begin());"
    */
    /*
    reverse_copy(v1.begin(), v1.end(), v2.begin());
    copies elements in reverse order
    */
    /*
    copy_backward(v1.begin(), v1.end(), v2.begin());
    copies elements back to front, the result is still the same
    */
    /*
    remove the end iterator "v1.end()," and give it a number of items "15"
    copy_n(v1.begin(), 15, v2.begin());
    */
    disp_v(v2);

    return 0;
}