#include "Projectile.h"

Projectile::Projectile()
{
	name = "?";
}

Projectile::~Projectile()
{

}

string Projectile::get_name() const
{
	return name;
}

string Projectile::get_faction() const
{
	return faction;
}