#pragma once
#include "Player.h"
#include <algorithm>

class Rogue : public Player
{
public:
	Rogue(std::string n, std::vector<int> a);
	~Rogue() = default;
	void sortAbilities();
};