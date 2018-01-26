#ifndef GAME_H
#define GAME_H
#include "map.h"


class Game {
public : 
	Game();
	~Game();
	
	int get_state();
	void set_state(int etat);
	bool gameON;

	void createMenu();
	void createNewGame();
	void loadSavedGame();
	void openOptions();
	void closeApp();
	void error();


private:

	int state;
	Map presentMap;
};

#endif //GAME_H