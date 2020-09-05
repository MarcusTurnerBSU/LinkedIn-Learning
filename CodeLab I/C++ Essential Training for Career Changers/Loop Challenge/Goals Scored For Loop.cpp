/*
#include <iostream>
using namespace std;

*My Attempt
int main() {
	char input = ' ';

	int gamesPlayed;
	int goalsScored = 0;
	cout << "How many games have you played this season? ";
	cin >> gamesPlayed;

	for (int i = 1; i <= gamesPlayed; i++) {
		cout << "How many goals have you scored in each game? ";
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
	int goals = 0, game = 1, numGames = 0;
	cout << "How many games did you play this season?";
	cin >> numGames;

	for (int i = 0; i < numGames; i++) {
		cout << "Enter goals for game " << game << ":";
		cin >> goals;
		totalGoals += goals;
		game++;
	}
	cout << "The total goals for your team season was: " << totalGoals << endl;
	return 0;
}
*/
