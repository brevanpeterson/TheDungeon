#pragma once
#include <string>
#include <vector>

class Player
{
protected:
	std::string name;
	int health, armor;
	std::vector<int> abilities;
	int strMod, dexMod, conMod, wisMod, intMod, chaMod;
	bool isDead, isStunned, isUnconsious, isActive;
public:
	Player(std::string n, std::vector<int> a);
	virtual ~Player() = default;
	
	// Character Creation
	void fillModifiers();

	// Getters and Setters
	
};

