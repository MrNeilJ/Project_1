//
// Created by Neil Johnson on 4/8/17.
//

#include "Ant.hpp"

Ant::Ant()
{
	x = 5;
	y = 0;
	direction = 'W';
}

Ant::Ant(int userX, int userY, char userDirection)
{
	x = userX;
	y = userY;
	direction = userDirection;
}

// Location Setters
void Ant::setX(int userInput)
{
	x = userInput;
}

void Ant::setY(int userInput)
{
	y = userInput;
}

void Ant::setDirection(char userInput)
{
	direction = userInput;
}

void Ant::setSpace(char userInput)
{
	space = userInput;
}



// Location Getters
int Ant::getX()
{
	return x;
}

int Ant::getY()
{
	return y;
}

char Ant::getDirection() {
	return direction;
}

char Ant::getSpace()
{
	return space;
}




