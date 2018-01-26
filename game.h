#ifndef GAME_H
#define GAME_H
#include "map.h"


class Game {
public : 
	Game();
	~Game();
	
	int get_state();
	void set_state(int etat);
	bool menuON;
	bool gameON;

	void createMenu();
	void createNewGame();
	void loadSavedGame();
	void openOptions();
	void closeApp();
	void error();


private:

	int state;
	string mapName;
};

#endif //GAME_H