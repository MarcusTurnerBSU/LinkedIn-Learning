//iterator acts a lot like a pointer, incremented and de-referenced as if it were a pointer
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vi1 = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    //this defines it1 and be can be removed
    vector<int>::iterator it1;   // iterator object

    vector<int>::iterator ibegin = vi1.begin();
    vector<int>::iterator iend = vi1.end();

    //if removed can write for(auto it1 =
    for (it1 = ibegin; it1 < iend; ++it1) {
        cout << *it1 << " ";
    }
    cout << endl;

    return 0;
}