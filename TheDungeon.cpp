#include <iostream>
#include "Random.h"

int main()
{
    srand(static_cast<unsigned int>(time(nullptr)));
    std::cout << roll(6, 1) << std::endl;
    std::cout << roll(6, 3) << std::endl;
    std::cout << rollAbility() << std::endl;
    std::vector<int> abilities = rollAbilities();
    for (auto ability : abilities) {
        std::cout << ability << " ";
    }
}
