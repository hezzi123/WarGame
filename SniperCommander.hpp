#ifndef WARGAME_SNIPERCOMMANDER_HPP
#define WARGAME_SNIPERCOMMANDER_HPP

#pragma once

#include "Soldier.hpp"

class SniperCommander : public Soldier{
public:
    SniperCommander(int id_player): Soldier(id_player, 100, 120){}
    void move(std::pair<int,int> source,std::vector<std::vector<Soldier*>>& board) override{}

};

#endif //WARGAME_SNIPERCOMMANDER_HPP
