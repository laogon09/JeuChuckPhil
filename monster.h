#ifndef MONSTER_H
#define MONSTER_H

#include "character.h"

class Monster : public Character
{
public:
	Monster();
	Monster(string mobRace);
	Monster(Character mob);
	~Monster();

private:
	string race;
};



#endif //MONSTER_H

