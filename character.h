#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>
using namespace std;


class Character {
public:
	//constructeurs & destructeur
	Character();
	Character(int health, string orientation, float vitesse, string team);
	Character(int health, string orientation, float vitesse, string etat, string team);
	Character(int health, string orientation, float vitesse, int armure, int fireResistance, int iceResistance, string team);
	Character(int health, string orientation, float vitesse, int armure, int fireResistance, int iceResistance, string etat, string team);
	~Character();

	//fonctions d'acces
	int get_hp();
	void heal(int healValue);
	void damage(int dmgValue);

	string get_direction();
	void set_direction(string orientation);

	float get_speed();
	void set_speed(float vitesse);
	//void speedBoost(float vitesse, int timer);

	int get_armor();
	void set_armor(int armure);
	void armorUp(int armure);

	int get_fireRes();
	void set_fireRes(int resist);
	void boost_fireRes(int boost);

	int get_iceRes();
	void set_iceRes(int resist);
	void boost_iceRes(int boost);

	string get_state();
	void set_state(string etat);
	void stateReset();

	string get_faction();
	void set_faction(string team);

	//void mobAttack();
	//void deathanimation();

private:
	int hp;
	string direction;
	float speed;
	int armor;
	int fireRes;
	int iceRes;
	string state;
	string faction;
	//int level;
	//int exp;

};
#endif; //CHARACTER_H