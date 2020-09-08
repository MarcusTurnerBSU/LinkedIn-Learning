#include <iostream>
#include <string>
using namespace std;

int main() {

	string rainbow[] = { "Red", "Orange", "Yellow", "Green", "Blue", "Indigo", "Violet" };
	string rainbows[7];

	cout << "The colours of the rainbow are: \n";

	for (int i = 0; i < 7; i++) {
		if (i < 6) {
			cout << rainbow[i] << ", ";
		}
		else {
			cout << rainbow[i] << ". ";
		}
	}
	
	for (int i = 0; i < 7; i++) {
		cout << "Enter a colour from the rainbow:\n";
		cin >> rainbows[i];
	}

	return 0;
}