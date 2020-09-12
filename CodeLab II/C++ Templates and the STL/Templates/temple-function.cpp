#include <iostream>
#include <string>
using namespace std;

//template is complier abstraction that allows you to write generic code
//can use typename or class in the angled bracket - be consistent
template <typename T>
T maxof(const T& a, const T& b) {
    return (a > b ? a : b);
}

//int maxof(const int& a, const int&& b) {
//    return(a > b ? a : b);
//}

int main() {
    int a = 7;
    int b = 9;

    cout << "max is " << maxof<int>(a, b) << endl;

    //string a = "seven";
    //string b = "nine";

    //cout << "max is " << maxof<string>(a, b) << endl;

    /*const char* a = "seven";
    const char* b = "nine";

    cout << "max is " << maxof<const char *>(a, b) << endl;*/

    //cout << "max is " << maxof(a, b) << endl;

    return 0;
}