#pragma once
#include "Player.h"
#include <algorithm>

class Bard : public Player
{
public:
	Bard(std::string n, std::vector<int> a);
	~Bard() = default;
	void sortAbilities();
};