#include "Random.h"

int roll(int sides, int iterations) {
    int total{ 0 };
	for (int i{ 1 }; i <= iterations; i++) {
		int roll = rand() % sides + 1;
		total += roll;
	}
    return total;
}

int rollAbility() {
    int ability{ 0 };
    std::vector<int> rolls{};
    for (int i{ 0 }; i < 4; i++) {
        rolls.push_back(roll(6,1));
    }
    std::sort(rolls.begin(), rolls.end());
    rolls.erase(rolls.begin());
    for (auto roll : rolls) {
        ability += roll;
    }
    return ability;
}

std::vector<int> rollAbilities() {
    std::vector<int> abilities;
    for (int i{ 0 }; i < 5; i++) {
        abilities.push_back(rollAbility());
    }
    return abilities;

}