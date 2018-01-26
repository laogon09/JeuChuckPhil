#ifndef MAP_H
#define MAP_H
#include <string>
#include <iostream>
#include <fstream>
#include "character.h"
#include "case.h"
#define INFOSFROMFILE 6

class Map {
public:
	Map(string mapFile);
	~Map();

	//access and modif

	//build
	void gridConstruct(string mapFile);
	void afficherGrid() const;
	void terrainSpawn();
	void enemySpawn();
	void playerSpawn();
	void changeMap(string newMapName);


private:
	string mapName;
	Character** enemyList;
	Case** mapGrid;
	int x;
	int y;
	int dimensions = x * y;
	string nMap;
	string sMap;
	string wMap;
	string eMap;
	//string mapData;

};



#endif //MAP_H