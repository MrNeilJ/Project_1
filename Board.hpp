//
// Created by Neil Johnson on 4/8/17.
//

#ifndef PROJECT_1_BOARD_HPP
#define PROJECT_1_BOARD_HPP


#include "Ant.hpp"

class Board {
private:
	int boardLength ;
    int boardWidth;
    char ** boardPtr;
	int*  tempX;
	int*  tempY;
	char* tempSpace;
	char* tempDir;

	Ant gameAnt;


public:
    Board();

    Board(int length, int width);

    double getLength();
    double getWidth();

	void setLength(int newLength);
    void setWidth(int newWidth);
	char getSpace(int x, int y);

	void printBoard();

	void move();

	void markBoard();
};


#endif //PROJECT_1_BOARD_HPP
