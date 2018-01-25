#include "character.h"
#include <stdlib.h>
using namespace std;

Character::Character() {
	hp = 1;
	direction = "S";
	speed = 1;
	armor = 0;
	fireRes = 0;
	iceRes = 0;
	state = "neutral";
	faction = "neutral";
}
Character::Character(int health, string orientation, float vitesse, string team) {
	hp = health;
	direction = orientation;
	speed = vitesse;
	armor = 0;
	fireRes = 0;
	iceRes = 0;
	state = "neutral";
	faction = team;
}
Character::Character(int health, string orientation, float vitesse, string etat, string team){
	hp = health;
	direction = orientation;
	speed = vitesse;
	armor = 0;
	fireRes = 0;
	iceRes = 0;
	state = etat;
	faction = team;
}
Character::Character(int health, string orientation, float vitesse, int armure, int fireResistance, int iceResistance, string team) {
	hp = health;
	direction = orientation;
	speed = vitesse;
	armor = armure;
	fireRes = fireResistance;
	iceRes = iceResistance;
	state = "neutral";
	faction = team;
}
Character::Character(int health, string orientation, float vitesse, int armure, int fireResistance, int iceResistance, string etat, string team){
	hp = health;
	direction = orientation;
	speed = vitesse;
	armor = armure;
	fireRes = fireResistance;
	iceRes = iceResistance;
	state = etat;
	faction = team;
}
Character::~Character() {

}

int Character::get_hp()
{
	return hp;
}
void Character::heal(int healValue) {
	hp = hp + healValue;
}
void Character::damage(int dmgValue) {
	hp = hp - dmgValue;
}

string Character::get_direction() {
	return direction;
}
void Character::set_direction(string orientation) {
	direction = orientation;
}
float Character::get_speed()
{
	return speed;
}
void Character::set_speed(float vitesse) {
	speed = vitesse;
}
/*void speedBoost(float vitesse, int timer) {
	speed = speed + vitesse;
}*/

int Character::get_armor() {
	return armor;
}
void Character::set_armor(int armure) {
	armor = armure;
}
void Character::armorUp(int armure) {
	armor = armor + armure;
}

int Character::get_fireRes() {
	return fireRes;
}
void Character::set_fireRes(int resist) {
	fireRes = resist;
}
void Character::boost_fireRes(int boost) {
	fireRes = fireRes + boost;
}

int Character::get_iceRes() {
	return iceRes;
}
void Character::set_iceRes(int resist) {
	iceRes = resist;
}
void Character::boost_iceRes(int boost) {
	iceRes = iceRes + boost;
}

string Character::get_state() {
	return state;
}
void Character::set_state(string etat) {
	state = etat;
}
void Character::stateReset() {
	state = "neutral";
}

string Character::get_faction() {
	return faction;
}
void Character::set_faction(string team) {
	faction = team;
}