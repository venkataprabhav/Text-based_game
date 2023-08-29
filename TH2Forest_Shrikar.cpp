#include <iostream>
#include<string>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

void p2()
{
	string part2;
	std::cout << "\nWould you like to play Part 2: Forest? yes or no" << std::endl;
	std::cin >> part2;
	if (part2 != "no")
	{
		std::cout << "\nYou have reached the forest. You are standing in between a crossroad path." << std::endl;
		std::cout << "\nYour compass is directing you to the west. The lake is straight ahead." << std::endl;

		bool ans21 = true;
		while (ans21 != false)
		{
			string p2q1;
			std::cout << "\nWhere will you go? north, west or east" << std::endl;
			std::cin >> p2q1;
			if (p2q1 == "north")
			{
				std::cout << "\nThe compass is directing you to the west. There is no point to go to the lake if you haven't found any clue in the forest." << std::endl;
			}
			if (p2q1 == "east")
			{
				std::cout << "\nThe compass is directing you to the west. This direction is not relavent." << std::endl;
			}
			if (p2q1 == "west")
			{
				std::cout << "\nCorrect!" << std::endl;
				std::cout << "\nYou took a left turn and walked for about 0.6 kilometres." << std::endl;
				std::cout << "\nSuddenly, you walk 1 metre extra and the compass directs you backwards." << std::endl;
				std::cout << "\nYou keep walking backwards and forwards." << std::endl;
				std::cout << "\nYou realise that there in something under you since, there aren’t any other magnetic objects around." << std::endl;
			}
			break;
		}
		bool ans22 = false;
		while (ans22 != 0)
		{
			string p2q2;
			std::cout << "\nUse shovel? yes or no" << std::endl;
			std::cin >> p2q2;
			if (p2q2 == "no")
			{
				std::cout << "\nThere is no point in giving up when you have found a required clue." << std::endl;
			}
			if (p2q2 == "yes")
			{
				std::cout << "\nYou tie your rope to a nearby tree and start digging." << std::endl;
				std::cout << "\nAfter digging 2 metres deep you see a wooden unlocked box with magnetic metal ends which explains the compass." << std::endl;
			}
			break;
		}
		bool ans23 = true;
		while (ans23 != false)
		{
			string p2q3;
			std::cout << "\nOpen the box? yes or no" << std::endl;
			std::cin >> p2q3;
			if (p2q3 == "no")
			{
				std::cout << "\nThere is no point in giving up when you have found a required clue." << std::endl;
			}
			std::cout << "\nYou opened the box. You find a small treasure map and a key." << std::endl;
			std::cout << "\nSomething is written behind the map:" << std::endl;
			std::cout << "Congratulations you have found the first key." << std::endl;
			std::cout << "This key will open the room where you will find the treasure." << std::endl;
			std::cout << "It is in the cave as shown in the map." << std::endl;
			std::cout << "However, the treasure chest requires a key as well." << std::endl;
			std::cout << "You will find it right next to the cave's opening, about 2.5 metres deep." << std::endl;
			std::cout << "GOOD LUCK!" << std::endl;
			std::cout << "\nYou return to the crossroad path. You are facing east." << std::endl;
			break;
		}
		bool ans24 = true;
		while (ans24 != false)
		{
			string p2q4;
			std::cout << "\nWhich direction should you walk to reach the lake? forward, right or left?" << std::endl;
			std::cin >> p2q4;
			if (p2q4 == "forward")
			{
				std::cout << "\nIt has nothing to do with the treasure as shown in the map. It will just use your time." << std::endl;
			}
			if (p2q4 == "right")
			{
				std::cout << "\nIt will just lead you back to where you started. There is no point giving up." << std::endl;
			}
			if (p2q4 == "left")
			{
				std::cout << "\nBingo!" << std::endl;
				std::cout << "\nYou take a left turn and walk all the way." << std::endl;
				std::cout << "\nYou reach the shore of the lake." << std::endl;
				std::cout << "\nThere is a boat as well. With diving gear, a rescue tube and a rope." << std::endl;
				std::cout << "\nYou forgot to get a rope while preparing for this treasure hunt." << std::endl;
				break;
			}	
		}
		bool ans25 = true;
		while (ans25 != false)
		{
			string p2q5;
			std::cout << "\nTake all those items? yes or no" << std::endl;
			std::cin >> p2q5;
			if (p2q5 == "yes")
			{
				std::cout << "\nYou need them, you take them." << std::endl;
			}
			if (p2q5 == "no")
			{
				std::cout << "\nYou won't be able to deal with the obstacles in the cave." << std::endl;
			}
			std::cout << "\nYou got on the boat, took all the items and started to sail towards the cave." << std::endl;
			std::cout << "\nWell Done! You have completed 'Part 2: Forest' of Treasure Hunt." << std::endl;
			break;
		}
	}
}

int main()
{
	p2();
	return 0;
}
