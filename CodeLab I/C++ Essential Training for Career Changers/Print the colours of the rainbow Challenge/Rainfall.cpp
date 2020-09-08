/*
#include <iostream>
using namespace std;

void getRainfall(double r[12]);

int main() {

	double rain[12];
	getRainfall(rain);

	cout << "Jan\tFeb\tMar\tApr\tMay\tJun\tJul\tAug\tSept\tOct\tNov\tDec\n";
	for (double r : rain) {
		cout << r << "\t";
	}
	return 0;
}

void getRainfall(double r[12]) {
	for (int i = 0; i < 12; i++) {
		cout << "Enter rainfall for month: " << i + 1;
		cin >> r[i];
	}
}
*/