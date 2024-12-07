

#ifndef CHESS_HORSE_H
#define CHESS_HORSE_H



#include "Figure.h"


class Horse: public Figure{
    Color color;
public:
    explicit Horse(Color new_color);
    std::string name() override;
    Color figure_color() override;
    std::vector<std::pair<int,int>> go(std::vector<std::vector<Figure*>> field, std::pair<int,int> coordinates, bool shah) override;
};

#endif //CHESS_HORSE_H