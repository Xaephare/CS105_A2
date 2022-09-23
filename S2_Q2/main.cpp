#include <vector>
#include "video_games.h"


void set_details(VideoGame* games[25], int &obj_count) {
	
	float price = 0;
	std::string title = "";
	std::string system = "";
	char user_input;
	char user_input2;
	
		bool is_on = true;
		

		while (is_on) {
			std::cout << "\nDo you want to enter data for a Computer Game or a Console Game? (o / c): ";
			std::cin >> user_input;
			std::cin.ignore();
			if (user_input == 'o' || user_input == 'O') {
				std::cout << "Please enter title of computer game: ";
				std::getline(std::cin, title);
				std::cout << "Please enter price: ";
				std::cin >> price;
				std::cin.ignore();
				std::cout << "Please enter the operating system: ";
				std::getline(std::cin, system);
				games[obj_count] = new ComputerGames(title, price, system);
				obj_count++;
				is_on = false;
			}
			else if (user_input == 'c' || user_input == 'C') {
				std::cout << "Please enter title of console game: ";
				std::getline(std::cin, title);
				std::cout << "Please enter price: ";
				std::cin >> price;
				std::cin.ignore();
				std::cout << "Please enter the console type: ";
				std::getline(std::cin, system);
				games[obj_count] = new ConsoleGames(title, price, system);
				obj_count++;
				is_on = false;
			}
			else {
				std::cout << "invalid option. try again (o / c): ";
			}
			std::cout << "\nWould you like to add another game? (y / n): ";
			std::cin >> user_input2;
			std::cin.ignore();
			if (user_input2 == 'y' || user_input2 == 'Y') {
				is_on = true;
			}
			else if (user_input2 == 'n' || user_input2 == 'N') {
				is_on = false;
			}
			else {
				std::cout << "invalid option. try again (y / n): ";
			}
		}
	}


void display_menu() {

	std::cout << "		Video Games Data Entry\n";
	std::cout << "*******************************************************\n";
}

void display_games(VideoGame* games[25], int obj_count) {

	std::cout << "Video games list:\n";
	
	for (int i = 0; i < obj_count; i++) {
		std::cout << "***********************************\n";
		games[i]->display();
		std::cout << std::endl;
	}
}


int main() {

	VideoGame* video_games[25];
	int obj_count = 0;
	
	display_menu();
	set_details(video_games, obj_count);
	display_games(video_games, obj_count);

	
	return 0;
}