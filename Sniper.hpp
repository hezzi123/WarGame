#ifndef WARGAME_SNIPER_HPP
#define WARGAME_SNIPER_HPP

#pragma  once

#include "Soldier.hpp"

class Sniper : public Soldier{
public:
    Sniper(int id_player) : Soldier(id_player, 50, 100){}
    void move(std::pair<int,int> source,std::vector<std::vector<Soldier*>>& board) override ;
};

#endif //WARGAME_SNIPER_HPP
