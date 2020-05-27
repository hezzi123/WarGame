#include "doctest.h"
#include "DemoGame.hpp"
#include "FootCommander.hpp"
#include "FootSoldier.hpp"

using namespace WarGame;

Board board (10,10);

TEST_CASE("checking 100 tests"){
    int i;
    int j;
    for (i = 0; i < 11; i++) {
        for (j = 0; j < 10; j++) {
            board[{j, j}] = new FootSoldier(j);
                    CHECK (board[{j, j}] != nullptr);
        }
    }
}