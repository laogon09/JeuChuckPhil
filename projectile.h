#ifndef PROJECTILE_H
#define PROJECTILE_H
#include <string>
using namespace std;

class Projectile {
public:
	Projectile();
	~Projectile();

	//bool spread() const;
	string get_name() const;
	string get_faction() const;
private:
	//int spread_dist;
	string name;
	string faction;
};

#endif // PROJECTILE_H