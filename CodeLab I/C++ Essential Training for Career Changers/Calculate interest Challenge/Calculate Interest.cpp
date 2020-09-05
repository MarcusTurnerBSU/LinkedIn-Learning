/*
Hello World
#include <iostream>

using namespace std;
//this is a sample program to print hello world to console 

int main() {
	//print out hello world
	cout << "Hello world!\n";
	return 0;
}*/

/* Challenge
- declare variables for principal, interest, rate and time
- calculate and print the expected interest
- use interest = principal * rate * time
- principal = 500, rate = .02 and time = 5
*/

#include <iostream>

using namespace std;

int main() {

	int principal = 500;
	double interest;
	double rate = .02;
	int time = 5; 

	interest = principal * rate * time;
	cout << interest << endl;

	return 0;
}