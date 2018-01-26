#ifndef CASE_H
#define CASE_H
#include "character.h"
#include "projectile.h"
#include "terrain.h"

class Case {
public:
	Case();
	Case(int xValue, int yValue);
	~Case();

	int get_caseX() const;
	int get_caseY() const;

	void set_caseX(int xValue);
	void set_caseY(int yValue);


	bool has_character() const;
	bool has_projectile() const;
	bool has_terrain() const;
	bool collision();

	void afficherCase() const;

	

private:
	Character * charac;
	Terrain * ter;
	Projectile * proj;
	int caseX;
	int caseY;
};



#endif //CASE_H
