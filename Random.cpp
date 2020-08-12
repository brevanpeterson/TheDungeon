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
    std::cout << "Rolling Character Ability Scores ... ";
    for (int i{ 0 }; i < 6; i++) {
        int ability = rollAbility();
        abilities.push_back(ability);
        std::cout << ability << " ";
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
    std::cout << std::endl;
    return abilities;

}