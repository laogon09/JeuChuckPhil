#include "map.h"



Map::Map(string mapFile)
{
	x = 0;
	y = 0;
	dimensions = 0;
	nMap, sMap, wMap, eMap = "none";
	mapGrid = nullptr;
	enemyList = nullptr;
	gridConstruct(mapFile);
}

Map::~Map()
{

}

void Map::gridConstruct(string mapData)
{
	ifstream theFile;
	string temp;
	theFile.open(mapData, ios::in);
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
		system("pause");
	}
	dimensions = x * y;
	mapGrid = new Case*[dimensions];
	int parcours = 0;
	for (int i = 1; i <= y; i++)
	{
		for (int j = 1; j <= x; j++)
		{
			mapGrid[parcours] = new Case(j,i);
			parcours++;
		}

	}
}

void Map::afficherGrid() const
{
	for (int parcours = 0; parcours < dimensions; parcours++)
	{
		
		mapGrid[parcours]->afficherCase();
		if (mapGrid[parcours]->get_caseX() == x)
		{
			cout << "\n";
		}
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
