// FILE: Locker.h
// CLASS PROVIDED: Locker
//
// CONSTRUCTOR for the Locker class:
//		Locker(int x = 0, int y = 0, int z = 0)
//		Postcondition: 
//


#ifndef LOCKER_H
#define LOCKER_H

class Locker 
{
	public:
		Locker(int x = 0, int y = 0, int z = 0);
		void alter(int x, int y, int z);
		int turn(int number, int direction);
		void close();
		void attemptOpen(int x_num, int y_num, int z_num);
		bool status();
		int getTop();
	private:
		int x;
		int y;
		int z;
		bool isOpen;
		int top;
};

#endif

--------------------------------------------------------------------------------------------------------------


// FILE: Locker.cpp
// CLASS IMPLEMENTATED: Locker

#include <iostream>
#include "Locker.h"


Locker::Locker(int initial_x, int initial_y, int initial_z)
// POST: The Locker has been set to (initial_x, initial_y, initial_z), and isOpen set to false
{
	x = initial_x;
	y = initial_y;
	z = initial_z;
	isOpen = false;
}

void Locker::alter(int set_x, int set_y, int set_z)
// PRE: set-x, set-y, and set-z are being initialized
// POST: to alter the lock's combination to a new three-number combination
{
	x = set_x;
	y = set_y;
	z = set_z;
}

int Locker::turn(int number, int direction)
// PRE: number is initialized, and direction value with either 0 or 1: 0 - clockwise and 1 - counter clockwise 
// POST: to turn the knob in a given direction until a specified number appear at the top 
{
	if(number <= 39 && number >= 0)
	{
		// 0 = clockwise
		if(direction == 0)
		{
			top = number;
			std::cout << "clockwise: " << top  << std::endl;
		}
		else
		{
			top = number;
			std::cout << "counter clockwise: " << top << std::endl;
		}

	}

	return top;
}

void Locker::close()
// POST: to close  the locker
{
	Locker(0, 0, 0);
	isOpen = false;
}

void Locker::attemptOpen(int x_num, int y_num, int z_num)
// POST: to attempt to open the locker
{
	if(x == x_num && y == y_num && z == z_num)
	{
		isOpen = true;
		std::cout << "Attempt to Open: Open!" << std::endl;
	}
	else
	{
		isOpen = false;
		std::cout << "Attempt to Open: Incorrect Combination" << std::endl;
	}

}

bool Locker::status()
// POST: shut or open
{
	if(isOpen == true)
	{
		std::cout << "Status: Open!" << std::endl;
	}
	else
	{
		std::cout << "Status: Shut" << std::endl;
	}

}

int Locker::getTop()
// POST: FCTVAL == what number is curretly at the top
{
	return top;
}


--------------------------------------------------------------------------------------------------------------


// FILE: test.cpp
// MAIN : Locker


#include <iostream>
#include "Locker.h"

using namespace std;

int main(int argc, char* argv[])
{
	Locker myLock;
	int x, y, z;

	myLock.alter(12, 3, 15);

	x = myLock.turn(12, 0);
	y = myLock.turn(2, 1);
	z = myLock.turn(15, 0);
	myLock.attemptOpen(x, y, z);
	myLock.status();

	return 0;
}


