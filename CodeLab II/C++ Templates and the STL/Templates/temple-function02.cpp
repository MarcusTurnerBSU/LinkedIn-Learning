#include <iostream>
#include <string>
#include <vector>
using namespace std;

template <typename T>
T maxof(const T& a, const T& b) {
    return (a > b ? a : b);
}

template <typename T>
void printv(const vector <T>& v) {
    if (v.empty()) return;
    for (const T& i : v) cout << i << " ";
    cout << endl;
}

int main() {
    int a = 7;
    int b = 9;

    //vector<int> v1 = { 1, 2, 3, 4, 5 };
    vector<string> v1 = { "one", "two", "three", "four", "five" };

    cout << "max is " << maxof<int>(a, b) << endl;

    printv(v1);

    return 0;
}