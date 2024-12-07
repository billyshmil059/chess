

#include "King.h"


King::King(Color new_color) {color=new_color;}
std::string King::name() {return "King";}
Color King::figure_color() {return color;}
std::vector<std::pair<int,int>> King::go(std::vector<std::vector<Figure*>> field, std::pair<int,int> coordinates, bool shah){
    return {{1,1}};
}