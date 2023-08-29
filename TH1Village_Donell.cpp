#include <iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

void p1()
{
	string part1;
	std::cout << "Would you like to play Part 4: Cave? yes or no" << std::endl;
	std::cin >> part1;
	if (part1 != "no")
	{
		std::cout << "\nYou enjoyed a short meal at a restaurant in your village." << std::endl;
		std::cout << "\nLater, you take a stroll in the park. Suddenly, you overhear two elders talking about treasure." << std::endl;
		std::cout << "\nThey stood 3 metres away from a public chair." << std::endl;

		bool ans11 = true;
		while (ans11 != false)
		{
			string p1q1;
			std::cout << "\nShould you sit on that chair? yes or no" << std::endl;
			std::cin >> p1q1;
			if (p1q1 == "no")
			{
				std::cout << "\nYou won't be able to find out the clues to locate the treasure." << std::endl;
			}
			if (p1q1 == "yes")
			{
				std::cout << "\nYou listen to the information and realise you’ll need something to help aid navigation." << std::endl;
				break;
			}
		}
		bool ans12 = true;
		while (ans12 != false)
		{
			string p1q2;
			std::cout << "\nWhat do you need to search for items? It should be magnetic and waterproof. map or compass" << std::endl;
			std::cin >> p1q2;
			if (p1q2 == "map")
			{
				std::cout << "\nIt can show you where to go. However, you won’t be able to locate any clues underwater." << std::endl;
			}
			if (p1q2 == "compass")
			{
				std::cout << "\nBoth magnetic and waterproof." << std::endl;
			}
			std::cout << "\nA compass is both magnetic and waterproof. You already have a compass at home so that is your first item sorted." << std::endl;
			std::cout << "\nSome of the clues are concealed and will be buried underground meaning you will need something to dig up the treasure." << std::endl;
			break;
		}
		bool ans13 = true;
		while (ans13 != false)
		{
			string p1q3;
			std::cout << "\nWhat would be needed to dig up the treasure? It should be practical, discreet and not too heavy." << std::endl;
			std::cout << "digger, spade or shovel?" << std::endl;
			std::cin >> p1q3;
			if (p1q3 == "digger")
			{
				std::cout << "\nIt may be more efficient but difficult to get a hold of, to control, and would draw a lot of attention." << std::endl;
			}
			if (p1q3 == "spade")
			{
				std::cout << "\nEasiest to use but too small meaning it would take too much time to dig when treasure is likely to be buried considerably deep." << std::endl;
			}
			if (p1q3 == "shovel")
			{
				std::cout << "\nYou can dig without making too much noise and is big enough to dig deep enough in an efficient amount of time." << std::endl;
			}
			std::cout << "\nYou see the pathway towards the forest and see a shovel left on the ground." << std::endl;
			break;
		}
		bool ans14 = true;
		while (ans14 != false)
		{
			string p1q4;
			std::cout << "\nShould you take it? yes or no" << std::endl;
			std::cin >> p1q4;
				if (p1q4 == "no")
				{
					std::cout << "\nYou won't be able to dig for the treasure in the most efficient way possible and you may not be able to find a better alternative." << std::endl;
				}
			if (p1q4 == "yes")
			{
				std::cout << "\nYou have the tools necessary to dig deep for clues." << std::endl;
			}
			std::cout << "\nYou have gathered your tools and you have reached the forest." << std::endl;
			break;
		}
	}
}

int main()
{
	p1();
	return 0;
}
