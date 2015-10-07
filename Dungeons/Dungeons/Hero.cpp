#include "stdafx.h"
#include "Hero.h"

Hero::Hero() {
	// Set stats
	level		= 1;
	health		= 10;
	xp			= 0;
	attack		= 3;
	strength	= 3;
	defence		= 3;
}
Hero::~Hero() {}

string Hero::getUserName() {
	return userName;
}

int Hero::getLevel() {
	return level;
}

int Hero::getHealth() {
	return health;
}

float Hero::getXp() {
	return xp;
}

int Hero::getAttack() {
	return attack;
}

int Hero::getStrength() {
	return strength;
}

int Hero::getDefence() {
	return defence;
}

int Hero::increaseLevel(int value)
{
	level += value;
	return level;
}

int Hero::removeHealth(int value)
{
	health -= value;
	return health;
}

int Hero::addHealth(int value) {
	health += value;
	return health;
}

float Hero::increaseXp(int value)
{
	xp += value;
	return xp;
}

int Hero::increaseAttack(int value = 1)
{
	attack += value;
	return attack;
}

int Hero::increaseStrenght(int value = 1)
{
	strength += value;
	return strength;
}

int Hero::increaseDefence(int value = 1)
{
	defence += value;
	return defence;
}

void Hero::getHeroStats()
{
	cout << "[[ Your currently level is: " << Hero::getLevel() << " and you've got " << Hero::getXp() << " experience! ]]" << endl
		 << "[[ Health: " << Hero::getHealth() << "% || "	 
		 << "Attack: " << Hero::getAttack() << " || "		 
		 << "Strength: " << Hero::getStrength() << " || "	 
		 << "Defence: " << Hero::getDefence() << " ]]"	<< endl;
}

bool Hero::setUserName(string inputUserName) {
	if (userName == "") {
		userName = inputUserName;
		return true;
	}
	else {
		// UserName is already set!
		return false;
	}
}


