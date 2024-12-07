
#ifndef CHESS_GAME_H
#define CHESS_GAME_H

#include "Pawn.cpp"
#include "Horse.cpp"
#include "King.cpp"
#include "Queen.cpp"
#include "Rock.cpp"
#include "Bishop.cpp"


class Game{
    std::pair<int,int> coordinates_old;
    std::vector<std::vector<Figure *>> field;
    bool shah;
public:
    Game();
    void test();
    std::vector<std::pair<int,int>> future_go (std::pair<int,int> coordinates);
    void move(std::pair<int,int> coordinates_new);
    void print();
};

#endif //CHESS_GAME_H