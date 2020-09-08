/*
#include <iostream>
#include <string>
using namespace std;

int main() {

	string seasons[] = { "Fall", "Winter", "Spring", "Summer" };
	int numbers[10];

	for (int i = 0; i < 10; i++) {
		cout << "Enter a number: ";
		cin >> numbers[i];
	}

	//for (int i = 0; i < 10; i++) cout << numbers[i];
	//finding the smallest number entered
	int min = numbers[0];
	for (int i = 1; i < 10; i++) {
		if (numbers[i] < min) {
			min = numbers[i];
		}
	}

	cout << "The smallest number entered was: " << min << endl;
	return 0;
}
*/