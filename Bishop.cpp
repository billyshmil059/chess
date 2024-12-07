

#include "Bishop.h"


Bishop::Bishop(Color new_color) {color=new_color;}

std::string Bishop::name() {return "Bishop";}

Color Bishop::figure_color() {return color;}

std::vector<std::pair<int,int>> Bishop::go(std::vector<std::vector<Figure*>> field, std::pair<int,int> coordinates, bool shah)
{
    int x = coordinates.first;
    int y = coordinates.second;
    std::vector<std::pair<int, int>> possible_moves;
    if (!shah) {
        for (int i = 1; i<8; i++) {
            if (x-i >= 0 and x-i <= 7 and y-i>=0 and y-i<=7) {
                if (field[x-i][y-i]) {
                    if (field[x][y-i]->figure_color() != field[x][y]->figure_color()) {
                        std::pair<int, int> possible_pair;
                        possible_pair.first = x - i;
                        possible_pair.second = y - i;
                        possible_moves.push_back(possible_pair);
                        break;
                    }
                    else {
                        break;
                    }
                }
                else {
                    std::pair<int, int> possible_pair;
                    possible_pair.first = x - i;
                    possible_pair.second = y - i;
                    possible_moves.push_back(possible_pair);
                }
            }
        }

        for (int i = 1; i<8; i++) {
            if (x-i >= 0 and x-i <= 7 and y+i>=0 and y+i<=7) {
                if (field[x-i][y+i]) {
                    if (field[x][y-i]->figure_color() != field[x][y]->figure_color()) {
                        std::pair<int, int> possible_pair;
                        possible_pair.first = x - i;
                        possible_pair.second = y + i;
                        possible_moves.push_back(possible_pair);
                        break;
                    } else {
                        break;
                    }
                }
                else {
                    std::pair<int, int> possible_pair;
                    possible_pair.first = x - i;
                    possible_pair.second = y + i;
                    possible_moves.push_back(possible_pair);
                }
            }
        }


        for (int i = 1; i<8; i++) {
            if (x+i >= 0 and x+i <= 7 and y+i>=0 and y+i<=7) {
                if (field[x+i][y+i]) {
                    if (field[x][y-i]->figure_color() != field[x][y]->figure_color()) {
                        std::pair<int, int> possible_pair;
                        possible_pair.first = x + i;
                        possible_pair.second = y + i;
                        possible_moves.push_back(possible_pair);
                        break;
                    } else {
                        break;
                    }
                }
                else {
                    std::pair<int, int> possible_pair;
                    possible_pair.first = x + i;
                    possible_pair.second = y + i;
                    possible_moves.push_back(possible_pair);
                }
            }
        }

        for (int i = 1; i<8; i++) {
            if (x+i >= 0 and x+i <= 7 and y-i>=0 and y-i<=7) {
                if (field[x+i][y-i]) {
                    if (field[x][y-i]->figure_color() != field[x][y]->figure_color()) {
                        std::pair<int, int> possible_pair;
                        possible_pair.first = x + i;
                        possible_pair.second = y - i;
                        possible_moves.push_back(possible_pair);
                        break;
                    } else {
                        break;
                    }
                }
                else {
                    std::pair<int, int> possible_pair;
                    possible_pair.first = x + i;
                    possible_pair.second = y - i;
                    possible_moves.push_back(possible_pair);
                }
            }
        }
    }
    return possible_moves;
}