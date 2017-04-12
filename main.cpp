#include <iostream>
#include "Board.hpp"

int main() {
    double height = 10;
    double width  = 10;

    std::cout << "*************************************" << std::endl;
    std::cout << "*      Langton's Ant Simulator      *" << std::endl;
    std::cout << "*************************************" << std::endl;

    std::cout << " \nWelcome! No Ant's were harmed to provide this simulation!" << std::endl;
    std::cout << "Before we begin we have a few questions to ask you...\n" << std::endl;

    std::cout << "Please provide us with the dimensions on how tall / wide you'd like the farm to be.\n"
              << "(Separate your dimensions with a space in between): " << std::endl;

	Board gameBoard();

	for (int i = 0; i < 20; i++)
	{
		gameBoard.move();
		gameBoard.markBoard();
		gameBoard.printBoard();
	}


    return 0;
}