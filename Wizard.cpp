#include "Wizard.h"

Wizard::Wizard(std::string n, std::vector<int> a) : Player(n, a) {

}

void Wizard::sortAbilities() {
	std::sort(abilities.begin(), abilities.end());
	std::vector<int> temp{ 10,10,10,10,10,10 };
	temp[4] = abilities[5];
	temp[3] = abilities[4];
	temp[2] = abilities[3];
	temp[0] = abilities[2];
	temp[1] = abilities[1];
	temp[5] = abilities[0];
	abilities = temp;
}