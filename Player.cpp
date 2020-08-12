#include "Player.h"

int calcMod(int ability);

Player::Player(std::string n, std::vector<int> a) : 
	name{ n }, abilities{ a }, 
	isDead{ false }, isStunned{ false }, isUnconsious{ false }, isActive{ false } {

}

void Player::fillModifiers() {
	strMod = calcMod(abilities[0]);
	dexMod = calcMod(abilities[1]);
	conMod = calcMod(abilities[2]);
	wisMod = calcMod(abilities[3]);
	intMod = calcMod(abilities[4]);
	chaMod = calcMod(abilities[5]);
}

int calcMod(int ability) {
	int modifier = (ability - 10) / 2; // This will slice the decimal point off, effectively rounding down
	return modifier;
}