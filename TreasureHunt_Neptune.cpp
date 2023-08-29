#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//Initialising variables within the class to execute questions, answers and the score for each part.
class treasureHunt
{
	public:
	string play;
	string q1;
	string q2;
	string q3;
	string q4;
	string q5;
	string q6;
	bool ans1;
	bool ans2;
	bool ans3;
	bool ans4;
	bool ans5;
	bool ans6;
	int score;
	int totalScore;
};

void Scenarios()
{
	
	treasureHunt part1;
	treasureHunt part2;
	treasureHunt part3;
	treasureHunt part4;
	treasureHunt part5;
	

	part1.score = 0;
	part1.totalScore = 3;
	part2.score = 0;
	part2.totalScore = 3;
	part3.score = 0;
	part3.totalScore = 3;
	part4.score = 0;
	part4.totalScore = 5;
	part5.score = 0;
	part5.totalScore = 4;

	//Donell
	part1.play;
	std::cout << "TREASURE HUNT: Game" << std::endl;
	std::cout << "\nWould you like to play Part 1: Village? Yes or No" << std::endl;
	std::cin >> part1.play;
	transform(part1.play.begin(), part1.play.end(), part1.play.begin(), ::tolower); //lowercase
	if (part1.play != "no")
	{
		std::cout << "\nYou enjoyed a short meal at a restaurant in your village." << std::endl;
		std::cout << "\nLater, you take a stroll in the park. Suddenly, you overhear two elders talking about treasure." << std::endl;
		std::cout << "\nThey stood 3 metres away from a public chair." << std::endl;

		part1.ans1 = true;
		while (part1.ans1 != false)
		{
			part1.q1;
			std::cout << "\nShould you sit on that chair? Yes or No" << std::endl;
			std::cin >> part1.q1;
			transform (part1.q1.begin(), part1.q1.end(), part1.q1.begin(), ::tolower); //lowercase
			if (part1.q1 == "no")
			{
				std::cout << "\nYou won't be able to find out the clues to locate the treasure." << std::endl;
			}
			if (part1.q1 == "yes")
			{
				std::cout << "\nYou listen to the information and realise you'll need something to help aid navigation." << std::endl;
				break;
			}
		}

		part1.ans2 = true;
		while (part1.ans2 != false)
		{
			part1.q2;
			std::cout << "\nWhat do you need to search for items? It should be magnetic and waterproof." << std::endl;
			std::cout << "Map or Compass" << std::endl;
			std::cin >> part1.q2;
			transform (part1.q2.begin(), part1.q2.end(), part1.q2.begin(), ::tolower); //lowercase
			if (part1.q2 == "map")
			{
				std::cout << "\nIt can show you where to go. However, you won’t be able to locate any clues underwater." << std::endl;
			}
			if (part1.q2 == "compass")
			{
				std::cout << "\nBoth magnetic and waterproof." << std::endl;
				part1.score = 1 + part1.score;
				std::cout << "Score: " << part1.score << std::endl;
			}
			std::cout << "\nA compass is both magnetic and waterproof. You already have a compass at home so that is your first item sorted." << std::endl;
			std::cout << "\nSome of the clues are concealed and will be buried underground meaning you will need something to dig up the treasure." << std::endl;
			break;
		}

		part1.ans3 = true;
		while (part1.ans3 != false)
		{
			part1.q3;
			std::cout << "\nWhat would be needed to dig up the treasure? It should be practical, discreet and not too heavy." << std::endl;
			std::cout << "Digger, Spade or Shovel" << std::endl;
			std::cin >> part1.q3;
			transform (part1.q3.begin(), part1.q3.end(), part1.q3.begin(), ::tolower); //lowercase
			if (part1.q3 == "digger")
			{
				std::cout << "\nIt may be more efficient but difficult to get a hold of, to control, and would draw a lot of attention." << std::endl;
			}
			if (part1.q3 == "spade")
			{
				std::cout << "\nEasiest to use but too small. It would take too much time to dig when treasure is likely to be buried considerably deep." << std::endl;
			}
			if (part1.q3 == "shovel")
			{
				std::cout << "\nYou can dig without making too much noise and is big enough to dig deep enough in an efficient amount of time." << std::endl;
				part1.score = 1 + part1.score;
				std::cout << "Score: " << part1.score << std::endl;
			}
			std::cout << "\nYou see the pathway towards the forest and see a shovel left on the ground." << std::endl;
			break;
		}

		part1.ans4 = true;
		while (part1.ans4 != false)
		{
			part1.q4;
			std::cout << "\nShould you take it? Yes or No" << std::endl;
			std::cin >> part1.q4;
			transform (part1.q4.begin(), part1.q4.end(), part1.q4.begin(), ::tolower); //lowercase
			if (part1.q4 == "no")
			{
				std::cout << "\nYou won't be able to dig for the treasure in the most efficient way possible and you may not be able to find a better alternative." << std::endl;
			}
			if (part1.q4 == "yes")
			{
				std::cout << "\nYou have the tools necessary to dig deep for clues." << std::endl;
				part1.score = 1 + part1.score;
				std::cout << "Score: " << part1.score << std::endl;
			}
			std::cout << "\nYou have gathered your tools and you have reached the forest." << std::endl;
			std::cout << "\nWell Done! You have completed 'Part 1: Village' of Treasure Hunt with a score of " << part1.score << "/" << part1.totalScore << std::endl;
			break;
		}
	}
	//Donell

	//Shrikar
	part2.play;
	std::cout << "\nWould you like to play Part 2: Forest? Yes or No" << std::endl;
	std::cin >> part2.play;
	transform (part2.play.begin(), part2.play.end(), part2.play.begin(), ::tolower); //lowercase
	if (part2.play != "no")
	{
		part2.ans1 = true;
		while (part2.ans1 != false)
		{
			std::cout << "\nYou have reached the forest. You are standing in between a crossroad path." << std::endl;
			std::cout << "\nYour compass is directing you to the west. The lake is straight ahead." << std::endl;

			part2.q1;
			std::cout << "\nWhere will you go? North, West or East" << std::endl;
			std::cin >> part2.q1;
			transform (part2.q1.begin(), part2.q1.end(), part2.q1.begin(), ::tolower); //lowercase
			if (part2.q1 == "north")
			{
				std::cout << "\nThe compass is directing you to the west. There is no point to go to the lake if you have not found any clue in the forest." << std::endl;
			}
			if (part2.q1 == "east")
			{
				std::cout << "\nThe compass is directing you to the west. This direction is not relavent." << std::endl;
			}
			if (part2.q1 == "west")
			{
				std::cout << "\nCorrect!" << std::endl;
				part2.score = 1 + part2.score;
				std::cout << "Score: " << part2.score << std::endl;
			}
			std::cout << "\nYou took a left turn and walked for about 0.6 kilometres." << std::endl;
			std::cout << "\nSuddenly, you walk 1 metre extra and the compass directs you backwards." << std::endl;
			std::cout << "\nYou keep walking backwards and forwards." << std::endl;
			std::cout << "\nYou realise that there in something under you since, there aren't any other magnetic objects around." << std::endl;
			break;
		}

		part2.ans2 = false;
		while (part2.ans2 != 0)
		{
			part2.q2;
			std::cout << "\nUse shovel? Yes or No" << std::endl;
			std::cin >> part2.q2;
			transform (part2.q2.begin(), part2.q2.end(), part2.q2.begin(), ::tolower); //lowercase
			if (part2.q2 == "no")
			{
				std::cout << "\nThere is no point in giving up when you have found a required clue." << std::endl;
			}
			if (part2.q2 == "yes")
			{
				std::cout << "\nYou tie your rope to a nearby tree and start digging." << std::endl;
				std::cout << "\nAfter digging 2 metres deep you see a wooden unlocked box with magnetic metal ends which explains the compass." << std::endl;
			}
			break;
		}

		part2.ans3 = true;
		while (part2.ans3 != false)
		{
			part2.q3;
			std::cout << "\nOpen the box? Yes or No" << std::endl;
			std::cin >> part2.q3;
			transform (part2.q3.begin(), part2.q3.end(), part2.q3.begin(), ::tolower); //lowercase
			if (part2.q3 == "no")
			{
				std::cout << "\nThere is no point in giving up when you have found a required clue." << std::endl;
			}
			if (part2.q3 == "yes")
			{
				part2.score = 1 + part2.score;
				std::cout << "Score: " << part2.score << std::endl;
			}
			std::cout << "\nYou opened the box. You find a small treasure map and a key." << std::endl;
			std::cout << "\nSomething is written behind the map:" << std::endl;
			std::cout << "Congratulations, you have found the first key." << std::endl;
			std::cout << "This key will open the door of the treasure room." << std::endl;
			std::cout << "It is in the cave as shown in the map." << std::endl;
			std::cout << "However, the treasure chest requires a key as well." << std::endl;
			std::cout << "You will find it right next to the cave's opening, about 2.5 metres deep." << std::endl;
			std::cout << "GOOD LUCK!" << std::endl;
			std::cout << "\nYou return to the crossroad path. You are facing east." << std::endl;
			break;
		}

		part2.ans4 = true;
		while (part2.ans4 != false)
		{
			part2.q4;
			std::cout << "\nWhich direction should you walk to reach the lake? Forward, Right or Left" << std::endl;
			std::cin >> part2.q4;
			transform (part2.q4.begin(), part2.q4.end(), part2.q4.begin(), ::tolower); //lowercase
			if (part2.q4 == "forward")
			{
				std::cout << "\nIt has nothing to do with the treasure as shown in the map. It will just use your time." << std::endl;
			}
			if (part2.q4 == "right")
			{
				std::cout << "\nIt will just lead you back to where you started. There is no point giving up." << std::endl;
			}
			if (part2.q4 == "left")
			{
				std::cout << "\nBingo!" << std::endl;
				std::cout << "\nYou take a left turn and walk all the way." << std::endl;
				std::cout << "\nYou reach the shore of the lake." << std::endl;
				std::cout << "\nThere is a boat as well. With diving gear, a rescue tube and a rope." << std::endl;
				std::cout << "\nYou forgot to get a rope while preparing for this treasure hunt." << std::endl;
				break;
			}
		}

		part2.ans5 = true;
		while (part2.ans5 != false)
		{
			part2.q5;
			std::cout << "\nTake all those items? Yes or No" << std::endl;
			std::cin >> part2.q5;
			transform (part2.q5.begin(), part2.q5.end(), part2.q5.begin(), ::tolower); //lowercase
			if (part2.q5 == "yes")
			{
				std::cout << "\nYou need them, you take them." << std::endl;
				part2.score = 1 + part2.score;
				std::cout << "Score: " << part2.score << std::endl;
			}
			if (part2.q5 == "no")
			{
				std::cout << "\nYou won't be able to deal with the obstacles in the cave." << std::endl;
			}
			std::cout << "\nYou got on the boat, took all the items and started to sail towards the cave." << std::endl;
			std::cout << "\nWell Done! You have completed 'Part 2: Forest' of Treasure Hunt with a score of " << part2.score << "/" << part2.totalScore << std::endl;
			break;
		}
	}
	//Shrikar

	//Venkata
	part3.play;
	std::cout << "\nWould you like to play Part 3: Lake? Yes or No" << std::endl;
	std::cin >> part3.play;
	transform (part3.play.begin(), part3.play.end(), part3.play.begin(), ::tolower); //lowercase
	if (part3.play != "no")
	{
		std::cout << "\nYou are sailing on the boat towards the cave." << std::endl;
		std::cout << "\nSuddenly, you see a rock right infront of you." << std::endl;
		std::cout << "\nThe left side is too small for your boat to go through because of the land next to it." << std::endl;
		std::cout << "\nThe right side of the boat is too big and it is the correct direction to go to the cave." << std::endl;

		part3.ans1 = true;
		while (part3.ans1 != false)
		{
			part3.q1;
			std::cout << "\nWhere will you go? Left or Right" << std::endl;
			std::cin >> part3.q1;
			transform (part3.q1.begin(), part3.q1.end(), part3.q1.begin(), ::tolower); //lowercase
			if (part3.q1 == "left")
			{
				std::cout << "\nYou can crash your boat." << std::endl;
			}
			if (part3.q1 == "right")
			{
				std::cout << "\nYou can freely row this way." << std::endl;
				part3.score = 1 + part3.score;
				std::cout << "Score: " << part3.score << std::endl;
			}
			std::cout << "\nYou sail towards the right and save yourself at the same time." << std::endl;
			std::cout << "\nYou sail for about 1km until you can see the cave." << std::endl;
			break;
		}

		part3.ans2 = true;
		while (part3.ans2 != false)
		{
			part3.q2;
			std::cout << "\nYou are facing towards the east. The cave is towards the right of you. There is a dead end in front of you." << std::endl;
			std::cout << "\nWhich direction are you going to sail? North or South" << std::endl;
			std::cin >> part3.q2;
			transform (part3.q2.begin(), part3.q2.end(), part3.q2.begin(), ::tolower); //lowercase
			if (part3.q2 == "north")
			{
				std::cout << "\nWhy would you go this way though the cave is on the other side?" << std::endl;
			}
			if (part3.q2 == "south")
			{
				std::cout << "\nCorrect" << std::endl;
				part3.score = 1 + part3.score;
				std::cout << "Score: " << part3.score << std::endl;
			}
			std::cout << "\nFinally, you reach the shore which leads you to the entrance of the cave." << std::endl;
			break;
		}

		part3.ans3 = true;
		while (part3.ans3 != false)
		{
			std::cout << "\nHowever, your compass changes direction when you get on land and walk." << std::endl;
			std::cout << "\nYou walk back and forth again like you did in the forest and realise that there is something you need underwater, in the mud." << std::endl;
			std::cout << "\nThe treasure map tells you that there is a key around here." << std::endl;

			part3.q3;
			std::cout << "\nUse diving gear? Yes or No" << std::endl;
			std::cin >> part3.q3;
			transform (part3.q3.begin(), part3.q3.end(), part3.q3.begin(), ::tolower); //lowercase
			if (part3.q3 == "no")
			{
				std::cout << "\nIf you go underwater without any gear, it is very likely for you to pass out and you won't be able to see anything." << std::endl;
			}
			if (part3.q3 == "yes")
			{
				std::cout << "\nYou put your diving gear on and dive underwater with your compass." << std::endl;
				std::cout << "\nYou leave the rest of your inventory in your boat." << std::endl;
				std::cout << "\nYou dive 2.5 metres underwater and notice a box similar to the one you found in the forest." << std::endl;
				std::cout << "\nIt is inside a glass pane and the box is placed in a small space." << std::endl;
				break;
			}
		}

		part3.ans4 = true;
		while (part3.ans4 != false)
		{
			part3.q4;
			std::cout << "\nBreak the glass pane? Yes or No" << std::endl;
			std::cin >> part3.q4;
			transform (part3.q4.begin(), part3.q4.end(), part3.q4.begin(), ::tolower); //lowercase
			if (part3.q4 == "no")
			{
				std::cout << "\nYou can't open the treasure chest without that key." << std::endl;
			}
			if (part3.q4 == "yes")
			{
				part3.score = 1 + part3.score;
				std::cout << "Score: " << part3.score << std::endl;
			}
			std::cout << "\nYou broke the glass pane and took the box out." << std::endl;
			std::cout << "\nYou swim back to the shore and open the box." << std::endl;
			std::cout << "\nYou find another key with a paper that says:" << std::endl;
			std::cout << "Congratulations on reaching this far. You will find the treasure in the cave." << std::endl;
			std::cout << "As you have seen, I placed this key where it wouldn't be hidden." << std::endl;
			std::cout << "I am going to give you a hint and let you know that the treasure has one thing that you are going to need to use right away. GOOD LUCK!" << std::endl;
			std::cout << "\nYou have reached the cave.";
			std::cout << "\n\nWell Done! You have completed 'Part 3: Lake' of Treasure Hunt with a score of " << part3.score << "/" << part3.totalScore << std::endl;
			break;
		}
	}
	//Venkata

	//Victory
	part4.play;
	std::cout << "\nWould you like to play Part 4: Cave? Yes or No" << std::endl;
	std::cin >> part4.play;
	transform (part4.play.begin(), part4.play.end(), part4.play.begin(), ::tolower); //lowercase
	if (part4.play != "no")
	{
		std::cout << "\nAs you enter the mysterious cave but have a strange feeling about it.";
		std::cout << "\n\nYou continue walking forward to explore.";
		std::cout << "\n\nYou encounter 3 different paths to choose that lead into different places.";

		part4.ans1 = true;
		while (part4.ans1 != false)
		{
			part4.q1;
			std::cout << "\n\nDo you trust the map? Yes or No ";
			std::cin >> part4.q1;
			transform (part4.q1.begin(), part4.q1.end(), part4.q1.begin(), ::tolower); //lowercase
			if (part4.q1 == "no")
			{
				std::cout << "\nThere’s no point not trusting the map as it lead you this far.";
			}
			if (part4.q1 == "yes")
			{
				std::cout << "\nIt might lead you to the treasure.";
				std::cout << "\n\nYou chose path number 1. It lead you to a dead end. It was a trap and arrows start shooting but they barely got you.";
				std::cout << "\n\nYou realise that this cave is very dangerous and that the map is wrong and there's no point using it anymore. You hesitate on whether you should go back.";
				break;
			}
		}

		part4.ans2 = true;
		while (part4.ans2 != false)
		{
			part4.q2;
			std::cout << "\n\nShould you go back or not? Yes or No ";
			std::cin >> part4.q2;
			transform (part4.q2.begin(), part4.q2.end(), part4.q2.begin(), ::tolower); //lowercase
			if (part4.q2 == "yes")
			{
				std::cout << "\nIt would all have been for nothing and you won't get the treasure.";
			}
			if (part4.q2 == "no")
			{
				std::cout << "\nYour life will be in danger but you might get the treasure.";
				part4.score = 1 + part4.score;
				std::cout << "\nScore: " << part4.score << std::endl;
			}
			std::cout << "\nYou slowly get your courage back and decide to continue exploring but there was nothing.";
			std::cout << "\n\nYou head back and decide to try the second path and you suddenly encounter a huge beast that tries to kill you. You run away as fast as you can to try and escape it.";
			std::cout << "\n\nYou run away as fast as you can to try and escape it.";
			break;
		}

		part4.ans3 = true;
		while (part4.ans3 != false)
		{
			part4.q3;
			std::cout << "\n\nYou think of whether you should run out of the cave or just run straight to the 3rd path. Outside or Path ";
			std::cin >> part4.q3;
			transform (part4.q3.begin(), part4.q3.end(), part4.q3.begin(), ::tolower); //lowercase
			if (part4.q3 == "outside")
			{
				std::cout << "\nThe beast stops chasing and goes back to its den.";
				part4.score = 1 + part4.score;
				std::cout << "\nScore: " << part4.score << std::endl;
			}
			if (part4.q3 == "path")
			{
				std::cout << "\nYou might face even more danger since you don't know what's in there.";
				part4.score = 1 + part4.score;
				std::cout << "\nScore: " << part4.score << std::endl;
			}
			std::cout << "\nThe beast decided to leave you alone. So out of curiosity you decide so go back and sneak into the 3rd path to see what's in there.";
			std::cout << "\n\nYou walk forward then, you reach a short 4 metre cliff.";
			std::cout << "\n\nYou see a treasure door 2 metres ahead.";
			break;
		}

		part4.ans4 = true;
		while (part4.ans4 != false)
		{
			part4.q4;
			std::cout << "\n\nDo you want to use the rope as there is a place to tie it firmly and go down? Yes or No ";
			std::cin >> part4.q4;
			transform (part4.q4.begin(), part4.q4.end(), part4.q4.begin(), ::tolower); //lowercase
			if (part4.q4 == "no")
			{
				std::cout << "\nYou can't use your shovel because the ground is made of stone and the other equipment won't be useful.";
			}
			if (part4.q4 == "yes")
			{
				std::cout << "\nYou tie you rope near by and climb down using the wall of the cliff and the rope to assist you.";
				part4.score = 1 + part4.score;
				std::cout << "\nScore: " << part4.score << std::endl;
			}
			std::cout << "\nYou reach the ground and the door is in front of you.";
			break;
		}

		part4.ans5 = true;
		while (part4.ans5 != false)
		{
			part4.q5;
			std::cout << "\n\nDo you want to approach the door? It could be something even more dangerous than the previous beast. Yes or No ";
			std::cin >> part4.q5;
			transform (part4.q5.begin(), part4.q5.end(), part4.q5.begin(), ::tolower); //lowercase
			if (part4.q5 == "no")
			{
				std::cout << "\nNo point in going back empty handed after reaching this far and having all the required keys. You are in front of the door as well.";
			}
			if (part4.q5 == "yes")
			{
				std::cout << "\nYou go towards the door.";
				part4.score = 1 + part4.score;
				std::cout << "\nScore: " << part4.score << std::endl;
			}
			std::cout << "\nAs you approach it you realise that it is the door that leads you to the treasure you have been looking for all along.";
			break;
		}

		part4.ans6 = true;
		while (part4.ans6 != false)
		{
			part4.q6;
			std::cout << "\n\nUse the key you found in the forest. Yes or No ";
			std::cin >> part4.q6;
			transform (part4.q6.begin(), part4.q6.end(), part4.q6.begin(), ::tolower); //lowercase
			if (part4.q6 == "no")
			{
				std::cout << "\nYou've come this far, why not open the door?";
			}
			if (part4.q6 == "yes")
			{
				std::cout << "\nGood Choice.";
				part4.score = 1 + part4.score;
				std::cout << "\nScore: " << part4.score << std::endl;

				std::cout << "\nYou open the door and see the treasure chest you have been looking for.";
				std::cout << "\n\nWell Done! You have completed 'Part 4: Cave' of Treasure Hunt with a score of " << part4.score << "/" << part4.totalScore << std::endl;
				break;
			}
		}
	}
	//Victory

	//Oluwatofunmi
	part5.play;
	std::cout << "\nWould you like to play Part 5: Treasure? Yes or No" << std::endl;
	std::cin >> part5.play;
	transform (part5.play.begin(), part5.play.end(), part5.play.begin(), ::tolower); //lowercase
	if (part5.play != "no")
	{
		std::cout << "\nYou have reached the Treasure. You see a chest." << std::endl;

		part5.ans1 = true;
		while (part5.ans1 != false)
		{
			part5.q1;
			std::cout << "\nWould you open the chest? Yes or No" << std::endl;
			std::cin >> part5.q1;
			transform (part5.q1.begin(), part5.q1.end(), part5.q1.begin(), ::tolower); //lowercase
			if (part5.q1 == "no")
			{
				std::cout << "\nYour journey would be pointless as you have missed out on the main treasure." << std::endl;
			}
			if (part5.q1 == "yes")
			{
				part5.score = 1 + part5.score;
				std::cout << "Score: " << part5.score << std::endl;

				std::cout << "\nYou find a powerful silver sword and some gold." << std::endl;
				std::cout << "\nAs you opened the box. Something hit the ground outside the entrance of the treasure room." << std::endl;
				std::cout << "\nYou see a huge beast. It was the same beast you escaped while you were going through the cave." << std::endl;
				break;
			}
			std::cout << "\nYou cannot fight the beast without the sword." << std::endl;
		}

		part5.ans2 = true;
		while (part5.ans2 != false)
		{
			part5.q2;
			std::cout << "\nFight the beast? Yes or No" << std::endl;
			std::cin >> part5.q2;
			transform (part5.q2.begin(), part5.q2.end(), part5.q2.begin(), ::tolower); //lowercase
			if (part5.q2 == "no")
			{
				std::cout << "\nThe beast would still attack you and it would not let you survive." << std::endl;
			}
			if (part5.q2 == "yes")
			{
				std::cout << "\nYou start fighting the beast." << std::endl;
				break;
			}
		}

		part5.ans3 = true;
		while (part5.ans3 != false)
		{
			part5.q3;
			std::cout << "\nSlash or Stab?" << std::endl;
			std::cin >> part5.q3;
			transform (part5.q3.begin(), part5.q3.end(), part5.q3.begin(), ::tolower); //lowercase
			if (part5.q3 == "slash")
			{
				std::cout << "\nYou damage the beast but it isn't finished." << std::endl;
			}
			if (part5.q3 == "stab")
			{
				std::cout << "\nYou damage the beast a lot." << std::endl;
			}
			std::cout << "\nThe beast comes charging with its claws." << std::endl;
			break;
		}

		part5.ans4 = true;
		while (part5.ans4 != false)
		{
			part5.q4;
			std::cout << "\nWhat will you do? Dodge, Block or Attack" << std::endl;
			std::cin >> part5.q4;
			transform (part5.q4.begin(), part5.q4.end(), part5.q4.begin(), ::tolower); //lowercase
			if (part5.q4 == "dodge")
			{
				std::cout << "\nYou dodge the beast's claws by a bit and you do not take that much damage." << std::endl;
			}
			if (part5.q4 == "block")
			{
				std::cout << "\nYou use your sword to block the attack. The beast takes damage because of the sharpness of your sword." << std::endl;
				part5.score = 1 + part5.score;
				std::cout << "Score: " << part5.score << std::endl;
			}
			if (part5.q4 == "attack")
			{
			std:cout << "\nYou aim for another slash with your sword and miss. You take some damage because of the careless move." << std::endl;
			}
			std::cout << "\nYou just need one shot to finsh the beast." << std::endl;
			break;
		}

		part5.ans5 = true;
		while (part5.ans5 != false)
		{
			part5.q5;
			std::cout << "\nWhat will you do? Slash or Stab" << std::endl;
			std::cin >> part5.q5;
			transform (part5.q5.begin(), part5.q5.end(), part5.q5.begin(), ::tolower); //lowercase
			if (part5.q5 == "slash")
			{
				std::cout << "\nThe beast took damage but wasn't finished. You stabbed the beast and it was finished." << std::endl;
			}
			if (part5.q5 == "stab")
			{
				std::cout << "\nYou finish the beast with one final move." << std::endl;
				part5.score = 1 + part5.score;
				std::cout << "Score: " << part5.score << std::endl;
			}
			std::cout << "\nYou have collected everything from your tools and the treasure." << std::endl;
			std::cout << "\nYou see a 'pressure plate' on the floor." << std::endl;
			std::cout << "\nYou stand on the pressure plate and the wall on the right side of the treasure room entrance opens." << std::endl;
			std::cout << "\nYou walk that way. It is a long passageway." << std::endl;
			break;
		}

		part5.ans6 = true;
		while (part5.ans6 != false)
		{
			part5.q6;
			std::cout << "\nDo you want to use the shortcut and get out? Yes or No" << std::endl;
			std::cin >> part5.q6;
			transform (part5.q6.begin(), part5.q6.end(), part5.q6.begin(), ::tolower); //lowercase
			if (part5.q6 == "no")
			{
				std::cout << "\nIf you just use the route you came here by, it will not be easy to carry the treasure and the materials." << std::endl;
				std::cout << "\nEven worse, someone else could see you and catch you. " << std::endl;
			}
			if (part5.q6 == "yes")
			{
				std::cout << "\nGood idea." << std::endl;
				part5.score = 1 + part5.score;
				std::cout << "Score: " << part5.score << std::endl;
			}
			std::cout << "\nYou take the exit and reappear in the opposite direction." << std::endl;
			std::cout << "\nYou call your brother to pick you up using a motor boat." << std::endl;
			std::cout << "\nWELL DONE! The treasure is yours." << std::endl;
			std::cout << "\nYour brother has set transport and everything required to get home with the treasure. He made sure no one finds out that you got the treasure." << std::endl;
			std::cout << "\nWell Done! You have completed 'Part 5: Treasure' of Treasure Hunt with a score of " << part5.score << "/" << part5.totalScore << std::endl;
			std::cout << "\nCONGRATULATIONS! The End." << std::endl;
			break;
		}
	}
	//Oluwatofunmi
}


int main()
{
	Scenarios();
	return 0;
}
