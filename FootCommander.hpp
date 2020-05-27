#ifndef WARGAME_FOOTCOMMANDER_HPP
#define WARGAME_FOOTCOMMANDER_HPP

#pragma once

#include "Soldier.hpp"

class FootCommander : public Soldier{
public:
    FootCommander(int id_player): Soldier(id_player, 20, 150){}
    void move(std::pair<int,int> source,std::vector<std::vector<Soldier*>>& board) override{}
};


#endif //WARGAME_FOOTCOMMANDER_HPP
