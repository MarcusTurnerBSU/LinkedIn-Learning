#include <iostream>
using namespace std;

//templates are used to define functions and classes
template <typename T>

//defines a function, size in bits that returns an integer
int size_in_bits(const T& a) {
	return sizeof(a) * 8;
}

int main() {
	//using the function with four different data types
	//int then char then float then double
	cout << size_in_bits(21) << endl;
	cout << size_in_bits('f') << endl;
	cout << size_in_bits(32.1f) << endl;
	cout << size_in_bits(32.1) << endl;
}