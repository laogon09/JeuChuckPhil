#ifndef HERO_H
#define HERO_H

#include "character.h"



class Hero :public Character
{
public:
	Hero();
	~Hero();

	string get_costume() const;
	void set_costume(string habit);

	void attack(string attackName);


	void afficher() const;
	void addAttack(string att);

private:
	string costume;

};


#endif //HERO_H
