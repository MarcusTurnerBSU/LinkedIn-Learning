/*
#include <iostream>
#include <string>
using namespace std;

int main() {
	// changed s1 etc to string1
	string string1, string2, string3;
	cout << "Enter three words: ";
	cin >> string1;
	cin >> string2;
	cin >> string3;

	if (string1.compare(string2) < 0) {
		if (string2.compare(string3) < 0) {
			cout << string1 << ", " << string2 << ", " << string3 << endl;
		}
		cout << string1 << ", " << string3 << ", " << string2 << endl;
	}
	else if (string2.compare(string3) < 0) {
		if (string1.compare(string3) < 0) {
			cout << string2 << ", " << string1 << ", " << string3 << endl;
		}
		cout << string2 << ", " << string3 << ", " << string1 << endl;
	}
	else {
		cout << string3 << ", " << string2 << ", " << string1 << endl;
	}
	return 0;
}
*/