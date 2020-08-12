#include <iostream>
#include "Random.h"
#include "Player.h"
#include "Fighter.h"

int main()
{
    /*std::vector<int> abilities = rollAbilities();
    Player test_player("John Smith", abilities);*/

    std::vector<int> scores {18, 17, 16, 15, 14, 13};
    Fighter test_fighter("Geralt", scores);
    test_fighter.sortAbilities();
    test_fighter.printAbilities();
}
