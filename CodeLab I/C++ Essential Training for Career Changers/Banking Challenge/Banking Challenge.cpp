#include <iostream>
using namespace std;

int main() {
	char accountType;
	bool checking = false, savings = false;
	double balance, deposits, withdrawals;
	cout << "Is this a checking or savings account? (c/s)";
	cin >> accountType;
	accountType = toupper(accountType);
	if (accountType == 'C') {
		checking = true;
	}
	else if (accountType == 'S')
		savings = true;
	else {
		cout << "Invalid Account Type";
		return 1;
	}

	cout << "Enter current balance: ";
	cin >> balance;
	cout << "Enter deposits: ";
	cin >> deposits;
	cout << "Enter withdrawals: ";
	cin >> withdrawals;
	balance = balance + deposits - withdrawals;

	if (checking) {
		cout << "Your checking account balance is now: $" << balance << endl;
	}
	else if (savings) {
		cout << "Your savings account balance is now: $" << balance << endl;
	}
	return 0;
}