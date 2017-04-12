//
// Created by Neil Johnson on 4/8/17.
//
#include <iostream>
#include "Board.hpp"

Board::Board()
{
    boardLength = 10;
    boardWidth = 10;

    boardPtr = new char*[boardWidth];
    for (int i = 0; i < boardWidth; i++)
    {
        boardPtr[i] = new char[boardLength];
    }

	Ant gameAnt;
}

Board::Board(int length, int width)
{
    boardLength = length;
    boardWidth = width;

	boardPtr = new char*[boardWidth];
	for (int i = 0; i < boardWidth; i++)
	{
		boardPtr[i] = new char[boardLength];
	}

	Ant gameAnt(length, width, 'W');

}

double Board::getLength()
{
    return boardLength;
}

double Board::getWidth()
{
    return boardWidth;
}

char Board::getSpace(int x, int y) {
	return boardPtr[y][x];
}



void Board::setLength(int newLength)
{
    boardLength = newLength;
}

void Board::setWidth(int newWidth)
{
    boardLength = newWidth;
}


void Board::printBoard()
{
	for(int i = 0; i < boardWidth; i++)
	{
		for (int j = 0; j < boardLength; j++)
		{
			std::cout << boardPtr[i][j];
		}
		std::cout << std::endl;
	}
}


void Board::move()
{
	*tempX 		= gameAnt.getX();
	*tempY 		= gameAnt.getY();
	*tempDir 	= gameAnt.getDirection();
	*tempSpace 	= gameAnt.getSpace();

	// Check to see what kind of Movement to make
	if (gameAnt.getDirection() == 'N')
	{
		if (*tempSpace == ' ')
		{
			gameAnt.setX((*tempX + 1) % boardLength);
			gameAnt.setDirection('E');
		}
		else
		{
			gameAnt.setX((*tempX - 1) % boardLength);
			gameAnt.setDirection('W');
		}
	}
	else if (gameAnt.getDirection() == 'E')
	{
		if (*tempSpace == ' ')
		{
			gameAnt.setY((*tempY - 1) % boardLength);
			gameAnt.setDirection('S');
		}
		else
		{
			gameAnt.setY((*tempY + 1) % boardLength);
			gameAnt.setDirection('N');
		}

	}
	else if  (gameAnt.getDirection() == 'S')
	{
		if (*tempSpace == ' ')
		{
			gameAnt.setX((*tempX - 1) % boardLength);
			gameAnt.setDirection('W');
		}
		else
		{
			gameAnt.setX((*tempX + 1) % boardLength);
			gameAnt.setDirection('E');
		}
	}
	else
	{
		if (*tempSpace == ' ')
		{
			gameAnt.setY((*tempY + 1) % boardLength);
			gameAnt.setDirection('N');
		}
		else
		{
			gameAnt.setY((*tempY - 1) % boardLength);
			gameAnt.setDirection('S');
		}
	}
	// Get space value for new space
	gameAnt.setSpace(getSpace(gameAnt.getX(), gameAnt.getY()));
}

void Board::markBoard()
{
	boardPtr[gameAnt.getY()][gameAnt.getX()] = '@';

	if (*tempSpace == ' ')
	{
		boardPtr[*tempY][*tempX] = '#';
	}
	else
	{
		boardPtr[*tempY][*tempX] = ' ';
	}
}







