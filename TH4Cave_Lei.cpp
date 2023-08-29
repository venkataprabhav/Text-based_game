#include <iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

void p4()
{
	string part4;
	std::cout << "\nWould you like to play Part 4: Cave? yes or no" << std::endl;
	std::cin >> part4;
	if (part4 != "no")
	{
		std::cout << "\nAs you enter the mysterious cave but have a strange feeling about it.";
		std::cout << "\nYou continue walking forward to explore.";
		std::cout << "\nYou encounter 3 different paths to choose that lead into different places.";
		bool ans41 = true;
		while (ans41 != false)
		{
			string p4q1;
			std::cout << "\nDo you trust the map? yes or no";
			std::cin >> p4q1;
			if (p4q1 == "no")
			{
				std::cout << "\nThere’s no point not trusting the map as it lead you this far";
			}
			if (p4q1 == "yes")
			{
				std::cout << "\nIt might lead you to the treasure";
				std::cout << "\nYou chose path number 1, It leads to a dead end but it was a trap and arrows start shooting but they barely grazed you";
				std::cout << "\nYou realise that this cave is very dangerous and that the map is wrong and there’s no point using it anymore you hesitate on whether you should go back";
			}
			break;
		}
		bool ans42 = true;
		while (ans42 != false)
		{
			string p4q2;
			std::cout << "\nShould you go back or not? yes or no";
			std::cin >> p4q2;
			if (p4q2 == "yes")
			{
				std::cout << "\nIt would all have been for nothing and you won’t get the treasure.";
			}
			if (p4q2 == "no")
			{
				std::cout << "\nYour life will be in danger but you might get the treasure";
			}
			std::cout << "\nYou slowly get your courage back and decide to continue exploring but there was nothing";
			std::cout << "\nYou head back and decide to try path 2 and you suddenly encounter a huge beast that tries to eat you. You run away as fast as you can to try and escape it.";
			std::cout << "\nYou run away as fast as you can to try and escape it.";
			break;
		}
		bool ans43 = true;
		while (ans43 != false)
		{
			int p4q3;
			std::cout << "\nYou think of whether you should run out of the cave or just run straight to the 3rd path. (0)Outside (1)3rd Path";
			std::cin >> p4q3;
			if (p4q3 == 0)
			{
				std::cout << "\nThe beast stops chasing and goes back to its den.";
			}
			if (p4q3 == 1)
			{
				std::cout << "\nYou might face even more danger since you don’t know what’s in there";
			}
			std::cout << "\nThe beast decided to leave you alone. So out of curiosity you decide so go back and sneak into the 3rd path to see what’s in there.";
			std::cout << "\nYou walk forward then suddenly you reach a short 4 metre cliff.";
			std::cout << "\nYou see a treasure door 2 metres ahead";
			break;
		}
		bool ans44 = true;
		while (ans44 != false)
		{
			string p4q4;
			std::cout << "\nDo you want to use the rope as there is a place to tie it firmly and go down? yes or no";
			std::cin >> p4q4;
			if (p4q4 == "no")
			{
				std::cout << "\nYou can’t use your shovel because the ground is made of stone and the other equipment won’t be useful.";
			}
			if (p4q4 == "yes")
			{
				std::cout << "\nYou tie you rope near by and climb down using the wall of the cliff and the rope to assist you.";
			}
			std::cout << "\nYou reach the ground and the door is in front of you";
			break;
		}
		bool ans45 = true;
		while (ans45 != false)
		{
			string p4q5;
			std::cout << "\nDo you want to approach the door? It could be something even more dangerous than the previous beast. yes or no";
			std::cin >> p4q5;
			if (p4q5 == "no")
			{
				std::cout << "\nNo point in going back empty handed after reaching this far and having all the required keys. You are in front of the door as well.";
			}
			if (p4q5 == "yes")
			{
				std::cout << "\nYou go towards the door.";
			}
			std::cout << "\nAs you approach it you realize that it is the door that leads you to the treasure you have been looking for all along.";
			break;
		}
		bool ans46 = true;
		while (ans46 != false)
		{
			string p4q6;
			std::cout << "\nUse the key you found in the forest. yes or no";
			std::cin >> p4q6;
			if (p4q6 == "no")
			{
				std::cout << "\nYou've come this far, why not open the door?";
			}
			if (p4q6 == "yes")
			{
				std::cout << "\nGood Choice.";
			}
			std::cout << "\nYou open the door and see the treasure chest you have been looking for.";
			std::cout << "\nWell Done! You have completed 'Part 4: Cave' of Treasure Hunt.";
			break;
		}
	}
}

int main()
{
	p4();
	return 0;
}
