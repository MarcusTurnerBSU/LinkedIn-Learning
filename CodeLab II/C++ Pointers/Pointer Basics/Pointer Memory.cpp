#include <iostream>
using namespace std;

int main() {
	cout << "Size of boolean: " << sizeof(bool) << endl;
	cout << "Size of char: " << sizeof(char) << endl;
	cout << "Size of int: " << sizeof(int) << endl;
	cout << "Size of float: " << sizeof(float) << endl;
	cout << "Size of long: " << sizeof(long) << endl;
	cout << "Size of double: " << sizeof(double) << endl;

	bool* pointerBool;
	char* pointerChar;
	int* pointerInt;

	cout << "Size of boolean pointer: " << sizeof(pointerBool) << endl;
	cout << "Size of char pointer: " << sizeof(pointerChar) << endl;
	cout << "Size of int pointer: " << sizeof(pointerInt) << endl;

	return 0;
}