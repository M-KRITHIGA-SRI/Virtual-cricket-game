#include "game.h"
using namespace std;

int main() {
	Game game;
	game.welcome();

	getchar();

    game.showAllPlayers();
	getchar();

	game.selectPlayers();
	game.showTeamPlayers();

    cin.ignore(numeric_limits<streamsize>::max(),'\n');

    cout << "\nPress Enter to toss";
    getchar();

    game.toss();
    game.startFirstInnings();
    game.startSecondInnings();
    game.showMatchSummary();






	return 0;
}
