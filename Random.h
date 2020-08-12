#pragma once
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <thread>
#include <chrono>

// Include srand(time(nullptr)); before the first use of these functions.
// ONLY ONCE

int roll(int sides, int iterations);
int rollAbility();
std::vector<int> rollAbilities();

