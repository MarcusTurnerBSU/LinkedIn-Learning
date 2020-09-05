#include <iostream>
using namespace std;

/*
*My Attempt
int main() {
	int goalsScored;
	cout << "Enter the amount of goals you scored in your first game: ";
	cin >> goalsScored;

	while (goalsScored != '99') {
		cout << "You entered " << goalsScored << ".\nEnter the amount of goals scored in the next game (99 to quit): ";
		cin >> goalsScored;
		//error where the goals aren't being added together properly
		goalsScored += goalsScored;
	}

	cout << "Your team scored " << goalsScored << " goals this season." << endl;

	return 0;
}

*Solution
int main() {

	int totalGoals = 0;
	int goals = 0, game = 1;

	while (goals >= 0) {
		cout << "Enter goals for Game " << game << ":(-1 to end)" ;
		cin >> goals;
		if (goals < 0)
			break;
		totalGoals += goals;
		game++;
	}

	cout << "The total goals for your team season was: " << totalGoals << endl;
	return 0;
}
*/
