

#ifndef CHESS_KING_H
#define CHESS_KING_H



#include "Figure.h"


class King: public Figure{
    Color color;
public:
    explicit King(Color new_color);
    std::string name() override;
    Color figure_color() override;
    std::vector<std::pair<int,int>> go(std::vector<std::vector<Figure*>> field, std::pair<int,int> coordinates, bool shah) override;
};

#endif //CHESS_KING_H