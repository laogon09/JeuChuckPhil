#include "terrain.h"


Terrain::Terrain()
{
	name = "?";
}

Terrain::~Terrain()
{

}

string Terrain::get_name() const
{
	return name;
}

string Terrain::get_faction() const
{
	return faction;
}