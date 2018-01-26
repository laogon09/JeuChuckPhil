#include "case.h"
#include <iostream>

using namespace std;

Case::Case()
{
	charac = nullptr;
	//ter = nullptr;
	//proj = nullptr;
}

Case::~Case()
{

}

int Case::get_caseX() const
{
	return caseX;
}

int Case::get_caseY() const
{
	return caseY;
}

void Case::set_caseX(int xValue)
{
	caseX = xValue;
}

void Case::set_caseY(int yValue)
{
	caseY = yValue;
}

bool Case::has_character() const
{
	if (charac != nullptr)
	{ 
		return true;
	}
	else {
		return false;
	}
}

//bool Case::has_terrain() const
//{
//	if (ter != nullptr)
//	{
//		return true;
//	}
//	else {
//		return false;
//	}
//}

//bool Case::has_projectile() const
//{
//	if (proj != nullptr)
//	{
//		return true;
//	}
//	else {
//		return false;
//	}
//}

void Case::afficherCase() const
{
	cout << "|";
	if (has_character() == true)
	{
		if (charac->get_faction == "good")
		{
			cout << charac->get_hp() << "*";
		}
		else {
			cout << charac->get_hp();
		}
	}
	//else if (has_projectile() == true)
	//{
	//	cout << //projectile's grid Name
	//}
	//else if (has_terrain() == true)
	//{
	//	cout << //terrain's grid Name
	//}
	else {
		cout << "  ";
	}
	//la derniere ligne n'aura pas de '|' sur la droite :/
}