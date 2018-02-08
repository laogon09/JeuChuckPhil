#include "monster.h"

Monster::Monster()
{
	race = "slime";
	set_faction("enemy");
}

Monster::Monster(string mobRace)
{
	race = mobRace;
}
Monster::Monster(Character mob)
{

}
Monster::~Monster()
{

}