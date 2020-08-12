#pragma once
#include "Player.h"
#include <algorithm>

class Wizard : public Player
{
public:
	Wizard(std::string n, std::vector<int> a);
	~Wizard() = default;
	void sortAbilities();
};