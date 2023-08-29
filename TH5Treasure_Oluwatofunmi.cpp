#include <iostream>
#include <string>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

void p5()
{
	string part5;
	std::cout << "\nWould you like to play Part 5: Treasure? yes or no" << std::endl;
	std::cin >> part5;
	if (part5 != "no")
	{
		std::cout << "\nYou have reached the Treasure. You see a chest." << std::endl;

		bool ans51 = true;
		while (ans51 != false)
		{
			string p5q1;
			std::cout << "\nWould you open the chest? yes or no" << std::endl;
			std::cin >> p5q1;
			if (p5q1 == "no")
			{
				std::cout << "\nYour journey would be pointless as you have missed out on the main treasure." << std::endl;
			}
			if (p5q1 == "yes")
			{
				std::cout << "\nYou would find a powerful silver sword and some gold." << std::endl;
				std::cout << "\nAs you opened the box. Something hit the ground outside the entrance of the treasure room." << std::endl;
				std::cout << "\nYou see a huge beast. It was the same beast you escaped while you were going through the cave." << std::endl;
				break;
			}
			std::cout << "\nYou cannot fight the beast without the sword" << std::endl;
		}
		bool ans52 = true;
		while (ans52 != false)
		{
			string p5q2;
			std::cout << "\nFight the beast? yes or no" << std::endl;
			std::cin >> p5q2;
			if (p5q2 == "no")
			{
				std::cout << "\nThe beast would still attack you and it would not let you survive." << std::endl;
			}
			if (p5q2 == "yes")
			{
				std::cout << "\nYou start fighting the beast." << std::endl;
				break;
			}
		}
		bool ans53 = true;
		while (ans53 != false)
		{
			string p5q3;
			std::cout << "\nShould you slash or stab?" << std::endl;
			std::cin >> p5q3;
			if (p5q3 == "slash")
			{
				std::cout << "\nYou damage the beast but it isn't finished." << std::endl;
			}
			if (p5q3 == "stab")
			{
				std::cout << "\nYou damage the beast a lot." << std::endl;
			}
			std::cout << "\nThe beast comes charging with its claws." << std::endl;
			break;
		}
		bool ans54 = true;
		while (ans54 != false)
		{
			string p5q4;
			std::cout << "\nWhat will you do? dodg, block or attack" << std::endl;
			std::cin >> p5q4;
			if (p5q4 == "dodge")
			{
				std::cout << "\nYou dodge the beast's claws by a bit and you do not take that much damage" << std::endl;
			}
			if (p5q4 == "block")
			{
				std::cout << "\nYou use your sword to block the attack.The beast takes damage because of the sharpness of your sword" << std::endl;
			}
			if (p5q4 == "attack")
			{
				std:cout << "\nYou aim for another slash with your and miss. You take some damage because of a careless move." << std::endl;
			}
			std::cout << "\nYou just need one shot to finsh the beast" << std::endl;
			break;
		}
		bool ans55 = true;
		while (ans55 != false)
		{
			string p5q5;
			std::cout << "\nWhat will you do? slash or stab." << std::endl;
			std::cin >> p5q5;
			if (p5q5 == "slash")
			{
				std::cout << "\nThe beast took damage but wasn’t finished. You stabbed the beast and it was finished." << std::endl;
			}
			if (p5q5 == "stab")
			{
				std::cout << "\nYou finish the beast with one final move." << std::endl;
			}
			std::cout << "\nYou have collected everything from your tools and the treasure." << std::endl;
			std::cout << "\nYou see a 'pressure plate' on the floor." << std::endl;
			std::cout << "\nYou stand on the pressure plate and the wall on the right side of the treasure room entrance opens." << std::endl;
			std::cout << "\nYou walk that way. It is a long passageway." << std::endl;
			break;
		}
		bool ans56 = true;
		while (ans56 != false)
		{
			string p5q6;
			std::cout << "\nDo you want to use the shortcut and get out? yes or no" << std::endl;
			std::cin >> p5q6;
			if (p5q6 == "no")
			{
				std::cout << "\nIf you just use the route you came here by, it will not be easy to carry the treasure and the materials." << std::endl;
				std::cout << "\nEven worse, someone else could see you and catch you. " << std::endl;
			}
			if (p5q6 == "yes")
			{
				std::cout << "\nGood idea." << std::endl;
			}
			std::cout << "\nYou take the exit and reappear in the opposite direction." << std::endl;
			std::cout << "\nYou call your brother to pick you up using a motor boat." << std::endl;
			std::cout << "\nWELL DONE! The treasure is yours." << std::endl;
			std::cout << "\nYour brother has set transport and everything need to get home with the treasure and made sure no one finds out that you got the treasure." << std::endl;
			std::cout << "\nWell Done! You have completed 'Part 5: Treasure' of Treasure Hunt." << std::endl;
			std::cout << "\nCONGRATULATIONS! The End." << std::endl;
			break;
		}
	}
}

int main()
{
	p5();
	return 0;
}
