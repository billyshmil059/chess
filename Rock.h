

#ifndef CHESS_ROCK_H
#define CHESS_ROCK_H



#include "Figure.h"


class Rock: public Figure{
    Color color;
public:
    explicit Rock(Color new_color);
    std::string name() override;
    Color figure_color() override;
    std::vector<std::pair<int,int>> go(std::vector<std::vector<Figure*>> field,std::pair<int,int> coordinates, bool shah) override;
};

#endif //CHESS_ROCK_H