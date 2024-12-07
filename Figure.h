#ifndef CHESS_FIGURE_H
#define CHESS_FIGURE_H


#include <iostream>
#include <vector>


enum Color{Black,White};


class Figure{
public:
    virtual std::string name()=0;
    virtual Color figure_color()=0;
    virtual std::vector<std::pair<int,int>> go(std::vector<std::vector<Figure*>> field,std::pair<int,int> coordinates, bool shah) = 0;
};

static bool check(std::vector<std::vector<Figure *>> field, Color color);

#endif //CHESS_FIGURE_H