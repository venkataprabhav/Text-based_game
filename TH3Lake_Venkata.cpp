#include <iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

void p3()
{
	string part3;
	std::cout << "\nWould you like to play Part 3: Lake? yes or no" << std::endl;
	std::cin >> part3;
	if (part3 != "no")
	{
		std::cout << "\nYou are sailing on the boat towards the cave" << std::endl;
		std::cout << "\nSuddenly, you see a rock right infront of you." << std::endl;
		std::cout << "\nThe left side is too small for your boat to go through because of the land next to it." << std::endl;
		std::cout << "\nThe right side of the boat is too big and it is the correct direction to go to the cave." << std::endl;

		bool ans31 = true;
		while (ans31 != false)
		{
			string p3q1;
			std::cout << "\nWhere will you go? left or right" << std::endl;
			std::cin >> p3q1;
			if (p3q1 == "left")
			{
				std::cout << "\nYou can crash your boat." << std::endl;

			}
			if (p3q1 == "right")
			{
				std::cout << "\nYou can freely row this way." << std::endl;
			}
			std::cout << "\nYou sail towards the right and save yourself at the same time." << std::endl;
			std::cout << "\nYou sail for about 1km until you can see the cave." << std::endl;
			break;
		}
		bool ans32 = true;
		while (ans32 != false)
		{
			string p3q2;
			std::cout << "\nYou are facing towards the east. The cave is towards the right of you. There is a dead end in front of you." << std::endl;
			std::cout << "\nWhich direction are you going to sail? north or south" << std::endl;
			std::cin >> p3q2;
			if (p3q2 == "north")
			{
				std::cout << "\nWhy would you go this way though the cave is on the other side?" << std::endl;
			}
			if (p3q2 == "south")
			{
				std::cout << "\nFinally, you reach the shore which leads you to the entrance of the cave." << std::endl;
				break;
			}
		}
		bool ans33 = true;
		while (ans33 != false)
		{
			std::cout << "\nHowever, your compass changes direction when you get on land and walk." << std::endl;
			std::cout << "\nYou walk back and forth again like you did in the forest and realise that there is something you need underwater, in the mud." << std::endl;
			std::cout << "\nThe treasure maps tells you that there is a key around here." << std::endl;

			string p3q3;
			std::cout << "\nUse diving gear? yes or no" << std::endl;
			std::cin >> p3q3;
			if (p3q3 == "no")
			{
				std::cout << "\nIf you go underwater without any gear, it is very likely for you to pass out and you won't be able to see anything." << std::endl;
			}
			if (p3q3 == "yes")
			{
				std::cout << "\nYou put your diving gear on and dive underwater with your compass." << std::endl;
				std::cout << "\nYou leave the rest of your inventory in your boat." << std::endl;
				std::cout << "\nYou dive 2 metres underwater and notice a box similar to the one you found in the forest." << std::endl;
				std::cout << "\nIt is inside a glass pane and the box is placed in a small space." << std::endl;
				break;
			}
		}
		bool ans34 = true;
		while (ans34 != false)
		{
			string p3q4;
			std::cout << "\nBreak the glass pane? yes or no" << std::endl;
			std::cin >> p3q4;
			if (p3q4 == "no")
			{
				std::cout << "\nYou can't open the treasure chest without that key." << std::endl;
			}
			if (p3q4 == "yes")
			{
				std::cout << "\nYou broke the glass pane and took the box out." << std::endl;
				std::cout << "\nYou swim back to the shore and open the box." << std::endl;
				std::cout << "\nYou find another key with a paper that says:" << std::endl;
				std::cout << "Congratulations on reaching this far. You will find the treasure in the cave." << std::endl;
				std::cout << "As you have seen I placed this key where it wouldn’t be hidden." << std::endl;
				std::cout << "I am going to give you a hint and let you know that the treasure has one thing that you are going to need to use right away. GOOD LUCK!" << std::endl;
				std::cout << "\nYou have reached the cave.";
				std::cout << "\n\nWell Done! You have completed 'Part 3: Lake' of Treasure Hunt" << std::endl;
				break;
			}

		}
	}
}

int main()
{
	p3();
	return 0;
}
