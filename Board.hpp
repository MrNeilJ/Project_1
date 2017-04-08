//
// Created by Neil Johnson on 4/8/17.
//

#ifndef PROJECT_1_BOARD_HPP
#define PROJECT_1_BOARD_HPP


class Board {
private:
    double boardLength ;
    double boardWidth;
    int boardPtr;

public:
    Board();

    Board(double length, double width);

    double getLength();
    double getWidth();

    void setLength(double newLength);
    void setWidth(double newWidth);

};


#endif //PROJECT_1_BOARD_HPP
