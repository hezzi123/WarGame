
#ifndef WARGAME_FOOTSOLDIER_HPP
#define WARGAME_FOOTSOLDIER_HPP

#pragma once
#include "Soldier.hpp"

class FootSoldier : public Soldier
{
    public:
        FootSoldier(int id_player): Soldier(id_player, 10, 100){}
        void move(std::pair<int,int> source,std::vector<std::vector<Soldier*>>& board) override;
};

#endif //WARGAME_FOOTSOLDIER_HPP
