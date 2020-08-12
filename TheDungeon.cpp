#include <iostream>
#include "Random.h"
#include "Player.h"

int main()
{
    std::vector<int> abilities = rollAbilities();
    Player test_player("John Smith", abilities);
}
