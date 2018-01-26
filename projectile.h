#ifndef PROJECTILE_H
#define PROJECTILE_H
#include <string>
using namespace std;

class Projectile {
public:
	Projectile();
	~Projectile();

	string get_name() const;
	string get_faction() const;
private:
	string name;
	string faction;
};

#endif // PROJECTILE_H