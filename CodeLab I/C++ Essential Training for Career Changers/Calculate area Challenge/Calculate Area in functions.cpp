#include <iostream>
#include <iomanip>
using namespace std;

double calculateArea();
double calculateCost(double area);

int main() {

	double roomArea = calculateArea();
	double cost = calculateCost(roomArea);
	cout << "Your final price comes to: $" << fixed << setprecision(2) << cost << endl;

	return 0;
}

double calculateArea() {

	double footLength, footWidth;
	cout << "In feet, what is the length and width of your carpet?" << endl;
	cin >> footLength >> footWidth;
	return footLength * footWidth;
}

double calculateCost(double area) {
	if (area < 120)
		return 99;
	double additionalArea;
	additionalArea = (area - 120) * .25;
	return 99 + additionalArea;
}