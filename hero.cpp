#include "hero.h"

Hero::Hero()
{
	costume = "fire";
	attackList.push_back("fireball");
}

Hero::~Hero()
{

}

string Hero::get_costume() const{
	return costume;
}

void Hero::set_costume(string habit)
{
	costume = habit;
}

void Hero::attack(string attackName)
{

}
void Hero::addAttack(string att)
{
	attackList.push_back(att);
}
void Hero::afficher() const
{
	cout << costume << endl;
	for (string att : attackList)
	{
		cout << att << endl;
	}

}