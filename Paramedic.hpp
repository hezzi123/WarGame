#ifndef WARGAME_PARAMEDIC_HPP
#define WARGAME_PARAMEDIC_HPP

#pragma once

#include "Soldier.hpp"

class Paramedic : public Soldier{
public:
    Paramedic(int id_player): Soldier(id_player, 0, 100){}
    void move(std::pair<int,int> source,std::vector<std::vector<Soldier*>>& board) override;

};

#endif //WARGAME_PARAMEDIC_HPP
