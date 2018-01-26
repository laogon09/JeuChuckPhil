#ifndef MAP_H
#define MAP_H
#include <string>
#include "character.h"

class Map {
public:
	Map();
	~Map();

	//access and modif

	//build
	void gridConstruct();
	void terrainSpawn();
	void enemySpawn();
	void playerSpawn();


private:
	string mapName;
	Character** enemyList;
	//Grid* mapGrid;


};



#endif //MAP_H