#pragma once
#include "Player.h"

class Fighter : public Player
{
public :
	Fighter(std::string n, std::vector<int> a);
	~Fighter() = default;
};

