#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
	string lastName;
	// listingPrice to a double and have them all on one line
	int listingPrice;
	// use const because we don't want them to change
    // as we know these values, we can add them in here and reference the variable name
	double sellerCost;
	double agentCommission;

	cout << "Enter homeowner's last name: ";
	cin >> lastName;
	lastName[0] = toupper(lastName[0]);
	cout << "Enter the listing price for the house: (no commas or decimal points) ";
	cin >> listingPrice;

	sellerCost = listingPrice * 0.06;
	agentCommission = listingPrice * 0.015;
	// add more tabs to fix formatting, add dollar sign for UX
	// and can have one cout text line
	cout << "\tHome Owner\tPrice of Home\tSeller's Cost\tAgent's Commission" << endl;
	cout << "\t" << left << setw(16) << lastName << "$" << listingPrice << "\t\t$" << sellerCost << "\t\t$" << agentCommission << endl;
	return 0;
}