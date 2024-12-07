

#ifndef CHESS_PAWN_H
#define CHESS_PAWN_H



#include "Figure.h"


class Pawn: public Figure{
    Color color;
public:
    explicit Pawn(Color new_color);
    std::string name() override;
    Color figure_color() override;
    std::vector<std::pair<int,int>> go(std::vector<std::vector<Figure*>> field, std::pair<int,int> coordinates, bool shah) override;
};

#endif //CHESS_PAWN_H