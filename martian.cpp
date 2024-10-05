#include <iostream>
#include <cmath>
#include <string>
#include <new.h>


using namespace std;

int main() {

	// Welcome Screen
	int wscreen = 0;
	char wscren;
	while (wscreen != 1) {

		std::cout << "                   _  _     ____________.--. \n ";
		std::cout << "                |\|_|//_.-** .'    \   /|  | \n ";
		std::cout << "                  |.-**'- .|   /      \_/ |  | \n ";
		std::cout << "                   \  ||  / | __\_____________| \n ";
		std::cout << "                   _\_||_/_| .-**            **-.  __ \n ";
		std::cout << "                 .' '.    \//                    *.\ / \n ";
		std::cout << "                ||   '. >()_                     |()< \n ";
		std::cout << "                ||__.-' |/\ \                    |/\  \n ";
		std::cout << "                    |   / * | \__________________ / ."" \n ";
		std::cout << "                   /   //  | / \ ' - .__________/  /\  \n ";
		std::cout << "               ___|__/_|__|/___\___*.______/_/   /__\  \n ";
		std::cout << "              /|\     [____________] \__/         |\  \n ";
		std::cout << "             //\ \     |  |=====| |   /\\         |\\ \n ";
		std::cout << "            // |\ \    |  |=====| |   | \\        | \\        ____...____....---- \n ";
		std::cout << "          .//__| \ \   |  |=====| |   | |\\       |--\\---****     .            .. \n ";
		std::cout << "_____....-//___|  \_\  |  |=====| |   |_|_\\      |___\\    .                 ...' \n ";
		std::cout << " .      .//-.__|_______|__|_____|_|_____[__\\_____|__.-\\      .     .    ...:: \n ";
		std::cout << "        //        //        /          \ `-_\\/         \\          .....::: \n ";
		std::cout << "  -... //     .  / /       /____________\    \\       .  \ \     .            . \n ";
		std::cout << "      //   .. .-/_/-.                 .       \\        .-\_\-.                 . \n ";
		std::cout << "     / /      '-----'           .             \ \      '._____.'         . \n ";
		std::cout << "  .-/_/-.         .                          .-\_\-.                          ... \n ";
		std::cout << " '._____.'                            .     '._____.'                       ..... \n ";
		std::cout << "        .                                                             ...... .. \n ";
		std::cout << " ----------------- Welcome To The Martian: Text Adventure! --------------------- \n ";
		std::cout << " \n";
		std::cout << " ------------------------------------------------------------------------------- \n";
		std::cout << " To Start, press s \n";
		std::cin >> wscren;
		if (wscren == 's') {
			wscreen++;
		}

	}

	// LET THE JOURNEY BEGIN 
	int storm = 0;
	char stormy;
	while (storm != 1) {
		std::cout << " You are Mark Watney, an astronaut who's been sent on Ares 3, a mars exploration mission with a team of 6. \n";
		std::cout << " The team consists of Commander Melissa Lewis, Major Rick Martinez, Alex Vogel, Doctor Chris Beck, Beth Johanssen,\nand yourself. Everyone with their own role to fulfill. \n";
		std::cout << " Unfortunately, one day a bad storm came and threatened the MAV that the team would use to return home! \n  ";
		std::cout << " After careful consideration, the commander decided to evacuate the planet, leave now instead of risk never leaving at all. \n";
		std::cout << " With everyone following the commander out and through the storm all seems well.\n";
		std::cout << " However, an antennae came flying out of nowhere at smashes into you. *BANG*\n";
		std::cout << "\n";
		std::cout << " Press [c] to continue: ";
		std::cin >> stormy;
		if (stormy == 'c') {
			storm++;
		}
	}


	// gonna try to lock rover under potatos with a while loop

	int potato = 0;

	std::cout << " When you come to, you realize you've been abandoned on a deserted planet.\n ";
	std::cout << " You make your way back into the Hab and patch yourself up. \n";
	std::cout << " Time to make a choice: \n";

	while (potato == 0) {

		char inout;

		std::cout << " [E]xit Hab -- [C]heck food rations \n";
		std::cin >> inout;

		if (inout == 'e') {

			char rovland;

			std::cout << "\n";
			std::cout << " You exited the building \n";
			std::cout << " You see a Rover to your right and the empty martian landscape everywhere else. \n";
			std::cout << " Will you check out the [R]over or the [L]andscape \n";
			std::cin >> rovland;
			std::cout << "\n";

			if (rovland == 'r') {

				if (potato == 0) {

					std::cout << " The land rover will be a great tool to get to the Ares 4 MAV when it comes for me. \n";
					std::cout << " You returned to the Hub. \n";

				}


			}
			else if (rovland == 'l') {

				std::cout << " You walked around the exterior of the Hub. \n";
				std::cout << " Back at the entrance. \n";
			}
		}

		else if (inout == 'c') {

			char insidehub;

			std::cout << "\n";
			std::cout << " You index your rations, 408 sols. \n";

			int bmi = 0;

			while (bmi != 3) {

				std::cout << " You need more food if you expect to last until the next Ares mission for rescue. \n";
				std::cout << " Will you sit down and [B]rainstorm,heck the [M]ap a little, or check the crewmates [I]nventory for anything useful? \n";
				std::cin >> insidehub;

				if (insidehub == 'b') {

					std::cout << "\n";
					std::cout << " Come on, You're Mark Watney, astronaut and botanist, we have potatoes we were saving for thanksgiving. \n";
					std::cout << " And we have the chest of vacuum sealed turds from the restroom outside! \n";
					std::cout << "\n";
					bmi++;
				}
				else if (insidehub == 'm') {

					std::cout << "\n";
					std::cout << " Well hold on now, we're not that far away from NASA's old Pathfinder One drone... \n";
					std::cout << "If I can get that thing on then I have a chance at communicating with NASA. \n";
					std::cout << "\n";
					bmi++;
				}
				else if (insidehub == 'i') {
					std::cout << "\n";
					std::cout << " A bunch of 'Happy Days' Episodes, Disco Music, and potatoes. \n";
					std::cout << "\n";
					potato++;
					bmi++;
				}

			}

			char waterchoice;
			int water = 0;
			int urine = 0;

			std::cout << " Alright, so we found potatoes, and we have feces for manure, now we just need a way to get water. \n";

			while (water != 1) {
				std::cout << " Recycle [U]rine, Use Rocket [F]uel, or [L]ose your will. \n";
				std::cin >> waterchoice;

				if (waterchoice == 'u') {

					std::cout << " You've chosen to recycle your own urine by filtering it to keep it relatively clean for the crops and your own drinking water. \n";
					std::cout << " It seemed like it was working initially for the potatoes, however they did not make it. \n";
					std::cout << "\n";
					urine++;

					if (urine == 2) {
						std::cout << "You kept trying to recycle your own urine and ended up dehydrating yourself. \n";
						std::cout << "Game Over \n";
						system("pause");
						return 0;
					}

				}
				else if (waterchoice == 'f') {

					char gtry;

					std::cout << " *BOOM* You made a mistake in synthesizing water from hydrazine and blew yourself up. \n";
					std::cout << " You survived. \n";
					std::cout << "\n";
					std::cout << " Will you [T]ry Again, or [G]ive up. \n";
					std::cin >> gtry;

					if (gtry == 't') {

						std::cout << "You were successful in synthesizing water! \n";
						std::cout << "\n";
						water++;

					}
					else if (gtry == 'g') {

						std::cout << "You gave up your will to live and thus died! \n";
						std::cout << "Game Over \n";
						system("pause");
						return 0;

					}

				}
				else if (waterchoice == 'l') {

					std::cout << " You've lost your will to live on the martian landscape. \n";
					std::cout << " Game Over \n";
					system("pause");
					return 0;

				}
			}
			std::cout << " ..... \n";
			std::cout << " Some months passed and you've gained potatoes. \n";
			potato++;
		}

	}
	//potato loop closed
	char wln;

	std::cout << " You think back to the music and episodes of 'Happy Days' you found earlier. \n";

	int sanity = 2;

	while (sanity != 4) {
		std::cout << " Will you [L]isten to Music, [W]atch 'Happy Days' episodes, or [N]othing \n";
		std::cin >> wln;


		if (wln == 'l') {

			std::cout << "\n";
			std::cout << " Listening to music soothed your sanity. \n";
			sanity++;
		}
		else if (wln == 'w') {
			std::cout << "\n";
			std::cout << " Watching some 'Happy days' made you happy. \n";
			sanity++;
		}

		// insanity route
		else if (wln == 'n') {
			sanity--;

				char insa;
				std::cout << "\n";
				std::cout << " You slowly started going insane. \n";
				std::cout << "...... \n";
				std::cout << " Maybe you should have enjoyed the media.\n";
				std::cout << " Some time passes by, you start hearing voices where there are none. \n";
				std::cout << " They are telling you to [L]eave the hub. \n";
				std::cout << " [S]tay? \n";
				std::cin >> insa;
				
				if (sanity == 0) {
					std::cout << " You follow the voices into the nothingness. \n";
					std::cout << " Game over. \n";
					system("pause");
					return 0;
				}

				else {

					if (insa == 'l') {
						char cave;
						std::cout << "\n";
						std::cout << " [F]ollow the voices \n";
						std::cout << " You walk towards a cliff face... \n";
						std::cout << " [T]urn back? or [K]eep going. \n";
						std::cout << " *faint noises of wind in the background* \n";
						std::cin >> cave;

						if (cave == 't') {
							std::cout << "\n";
							std::cout << " You turn around and come face to face with a storm. \n";
							std::cout << " The voices were all in your head, you fall to your knees as the storm sweeps you away. \n";
							system("pause");
							return 0;
						}
						else if (cave == 'k') {

							char endofline;
							std::cout << "\n";
							std::cout << " You push onward. \n";
							std::cout << " You see a cave in the distance. \n";
							std::cout << " You think of turning back, but as you turn around you see a heavy storm coming. \n";
							std::cout << " [E]nter";
							std::cin >> endofline;

							std::cout << " \n";
							std::cout << ".....\n";
							std::cout << "You \n";
							std::cout << "Are Not \n";
							std::cout << "Alone.\n";
							std::cout << "Game over. \n";
							system("pause");
							return 0;
						}

					}
					else if (insa == 's') {
						std::cout << "\n";
						std::cout << " You chose to indulge in media for your mental health. \n";
						sanity++;

					}
				}
			
		}

	}
	std::cout << "\n";
	std::cout << " Now that you've taken time for the little things, its time to find pathfinder one. \n";

	int hunt = 0;
	
	while (hunt != 1) {
		std::cout << "\n";
		std::cout << " [E]xit the hub";
		std::cin >> hunt;
		if (hunt == 'e') {
			hunt++;
		}
	}

	char half;

	std::cout << "\n";
	std::cout << " ... A week and a half go by... \n";
	std::cout << "You see nothing around you... [T]urn back? or [C]ontinue\n";
	std::cin >> half;
	
	//turned back before reaching pathfinder
	if (half == 't') {
		char endofstory;
		std::cout << "... Another week and a half go by...\n";
		std::cout << "You've made it back to the hub\n";
		std::cout << " [T]ry Again \n";
		std::cin >> endofstory;

		if (endofstory == 't') {
			std::cout << " Back on the journey to the pathfinder. \n";
			std::cout << " ....\n";
			std::cout << " You see something in the distance \n";
			std::cout << " ....... \n";
			std::cout << "You've made it to the pathfinder!!";
			std::cout << " Now to see if you can get this thing working so that you can try to get in contact with NASA!\n";
			std::cout << "\n";
			std::cout << "End of Part 1... \n";
			system("pause");
			return 0;
		}

	}
	else if (half == 'c') {

		std::cout << "... Another week and a half go by...\n";
		std::cout << ".......\n";
		std::cout << " You see something in the distance \n";
		std::cout << " ....... \n";
		std::cout << "You've made it to the pathfinder!!";
		std::cout << " Now to see if you can get this thing working so that you can try to get in contact with NASA!\n";
		std::cout << "\n";
		std::cout << "End of Part 1... \n";
		system("pause");
		return 0;
	}


	system("pause");
	return 0;
}
