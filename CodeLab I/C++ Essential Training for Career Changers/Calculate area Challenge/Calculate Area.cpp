/*
*My Work
#include <iostream>
using namespace std;

int main() {

	double footLength, footWidth, area, newArea, newPrice, additionalArea;
	//don't need need these variables, can just use the numbers
	double minArea = 120;
	double minPrice = 99;

	cout << "In feet, what is the length and width of your carpet?" << endl;
	cin >> footLength >> footWidth;
	area = footLength * footWidth;

	if (area <= minArea) {
		cout << "The fee for the carpet cleaning service will be $" << minPrice << endl;
	}
	else if (area > minArea) {
		newArea = area - minArea;
		additionalArea = newArea * .25;
		newPrice = minPrice + additionalArea;
		cout << "Your final price comes to: $" << newPrice << endl;
	}
	return 0;
}
*/