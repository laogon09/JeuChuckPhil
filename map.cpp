#include "map.h"



Map::Map(string mapFile)
{
	x = 0;
	y = 0;
	nMap, sMap, wMap, eMap = "none";
	mapGrid = nullptr;
	gridConstruct(mapFile);
	afficherGrid();
}

Map::~Map()
{

}

void Map::gridConstruct(string mapData)
{
	ifstream theFile(mapData);
	string temp;
	if (theFile.is_open())
	{
		getline(theFile, temp);
		x = stoi(temp);
		getline(theFile, temp);
		y = stoi(temp);
		getline(theFile, temp);
		nMap = temp;
		getline(theFile, temp);
		sMap = temp;
		getline(theFile, temp);
		wMap = temp;
		getline(theFile, temp);
		eMap = temp;
		theFile.close();
	}
	else {
		cout << "unable to open file." << endl;
	}
	mapGrid = new Case*[dimensions];
	int parcours = 0;
	for (int i = 1; i <= y; i++)
	{
		for (int j = 1; j <= x; j++)
		{
			mapGrid[parcours]->set_caseX(j);
			mapGrid[parcours]->set_caseY(i);
			parcours++;
		}

	}
}

void Map::afficherGrid() const
{
	for (int parcours = 0; parcours < dimensions; parcours++)
	{
		mapGrid[parcours]->afficherCase();
	}
}

void Map::terrainSpawn()
{

}

void Map::enemySpawn()
{

}

void Map::playerSpawn()
{

}

void Map::changeMap(string newMapName)
{
	//empty this map, make new map from file and place player in the right spot
}
