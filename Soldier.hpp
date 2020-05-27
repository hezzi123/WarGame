#ifndef WARGAME_SOLDIER_HPP
#define WARGAME_SOLDIER_HPP

#pragma once
#include <vector>
#include <utility>
#include <limits>
#include <iostream>
#include <cmath>

static int num1=0;
static int num2=0;

class Soldier {
public:
    int health;
    int player;
    const int mHealth;

    Soldier(int health, int player, int mHealth) : health(health), player(player), mHealth(mHealth) {}

    virtual ~Soldier() {
        if (player == 1)num1--;
        if (player == 2)num2--;
    }

    virtual void move(std::pair<int, int> source, std::vector<std::vector<Soldier *>> &board) = 0;
};
#endif //WARGAME_SOLDIER_HPP
