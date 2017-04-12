//
// Created by Neil Johnson on 4/8/17.
//

#ifndef PROJECT_1_ANT_HPP
#define PROJECT_1_ANT_HPP


class Ant {
private:
	int x;
	int y;
	char direction;
	char space;

public:
	Ant();
	Ant(int, int, char);

	// Location Setters
	void setX(int);
	void setY(int);
	void setDirection(char);

	// Location Getters
	int getX();
	int getY();
	char getDirection();


	void setSpace(char userInput);

	char getSpace();
};


#endif //PROJECT_1_ANT_HPP
