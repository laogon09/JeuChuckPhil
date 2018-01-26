#ifndef TERRAIN_H
#define TERRAIN_H
#include <string>
using namespace std;

class Terrain {
public:
	Terrain();
	~Terrain();

	string get_name() const;
	string get_faction() const;
private:
	string name;
	string faction;
};

#endif //TERRAIN_H