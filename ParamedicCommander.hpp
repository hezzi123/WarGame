#ifndef WARGAME_PARAMEDICCOMMANDER_HPP
#define WARGAME_PARAMEDICCOMMANDER_HPP

#pragma once

#include "Soldier.hpp"
using namespace std;

class ParamedicCommander : public Soldier{
public:
    ParamedicCommander(int id_player): Soldier(id_player, 0, 200){}
    void move(std::pair<int,int> source,std::vector<std::vector<Soldier*>>& board) override{}
};

#endif //WARGAME_PARAMEDICCOMMANDER_HPP
