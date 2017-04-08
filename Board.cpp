//
// Created by Neil Johnson on 4/8/17.
//

#include "Board.hpp"
Board::Board()
{
    boardLength = 10;
    boardWidth = 10;
    boardPtr = new int[boardWidth];
    for (int i = 0; i < boardWidth; i++)
    {
        boardPtr[i] = new int[boardLength];
    }
}

Board::Board(double length, double width)
{
    boardLength = length;
    boardWidth = width;
}

double Board::getLength() {
    return boardLength;
}

double Board::getWidth() {
    return boardWidth;
}

void Board::setLength(double newLength) {
    boardLength = newLength;
}

void Board::setWidth(double newWidth) {
    boardLength = newWidth;
}





