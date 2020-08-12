#include <iostream>
#include "Random.h"
#include "Player.h"
#include "Fighter.h"
#include "Bard.h"
#include "Rogue.h"
#include "Wizard.h"

int main()
{
    /*std::vector<int> abilities = rollAbilities();
    Player test_player("John Smith", abilities);*/

    std::vector<int> scores {18, 17, 16, 15, 14, 13};
    Fighter test_fighter("Geralt", scores);
    test_fighter.sortAbilities();
    test_fighter.printAbilities();

    Rogue test_rogue("Geralt", scores);
    test_rogue.sortAbilities();
    test_rogue.printAbilities();

    Bard test_bard("Geralt", scores);
    test_bard.sortAbilities();
    test_bard.printAbilities();

    Wizard test_wizard("Geralt", scores);
    test_wizard.sortAbilities();
    test_wizard.printAbilities();
    
}
