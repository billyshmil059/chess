

#ifndef CHESS_QUEEN_H
#define CHESS_QUEEN_H



#include "Figure.h"


class Queen: public Figure{
    Color color;
public:
    explicit Queen(Color new_color);
    std::string name() override;
    Color figure_color() override;
    std::vector<std::pair<int,int>> go(std::vector<std::vector<Figure*>> field,std::pair<int,int> coordinates, bool shah) override;
};

#endif //CHESS_QUEEN_H