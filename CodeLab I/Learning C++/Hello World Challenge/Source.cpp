//Hello World
/* By Erin Colvin */
//iostream used for inputting and outputting
#include <iostream>
using namespace std;


//////////////////////////////////////
//Main is always the first to run
/////////////////////////////////////
int main()
{
	string name;
	string favFood;
	cout << "Please enter your name: " << endl;
	cin >> name;
	cout << "Hello, " << name << ". What is your favourite food?" << endl;
	cin >> favFood; 
	cout << favFood << " is also my favourite food!" << endl;
	return 0;
}