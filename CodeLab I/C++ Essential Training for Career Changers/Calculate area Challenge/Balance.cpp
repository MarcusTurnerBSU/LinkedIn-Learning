/*
#include <iostream>
#include <string>
using namespace std;

int calculateMonths(double balance, double monthlyPayment) {
	int months = 0;
	while (balance > 0)
	{
		balance -= monthlyPayment;
		months++;
	}
	return months;
}

int main() {

	double balance, monthlyPayment;
	int months = 0;
	cout << "Enter initial loan balance: ";
	cin >> balance;
	cout << "Enter monthly payment: ";
	cin >> monthlyPayment;
	
	cout << "Your loan will be paid off in " << calculateMonths(balance, monthlyPayment) << " months." << endl;

	return 0;
}
*/