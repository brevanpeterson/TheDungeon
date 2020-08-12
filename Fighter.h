#pragma once
#include "Player.h"
#include <algorithm>

class Fighter : public Player
{
public :
	Fighter(std::string n, std::vector<int> a);
	~Fighter() = default;
	void sortAbilities();
};

