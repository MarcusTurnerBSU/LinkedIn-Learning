/*
#include <iostream>
using namespace std;

//'&' is the address of value - passes a pointer
//passing values by reference passes a value in memory - this is done by using the '&'

//passing values by value, makes a copy of it
double average(double a, double b, double c) {
	a += 3;
	b += 4;
	c += 5;
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
	cout << "c: " << c << endl;
	return (a + b + c) / 3;
}

int main() {

	double x = 5, y = 10, z = 15;
	double avg = average(x, y, z);
	cout << "The average is: " << avg << endl;
	cout << "x: " << x << endl;
	cout << "y: " << y << endl;
	cout << "z:	" << z << endl;

	return 0;
}
*/