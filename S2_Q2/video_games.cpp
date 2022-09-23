#include "video_games.h"


VideoGame::VideoGame() {
	obj_count = 0;
	title = "";
	price = 0;
}

void VideoGame::display() {
	std::cout << "Empty object\n";
	}

ComputerGames::ComputerGames(std::string title, float price, std::string operating_system) {
		this->title = title;
		this->price = price;
		this->operating_system = operating_system;
	}

void ComputerGames::display() {
	std::cout << "Title: " << title << "\nPrice: " << price << "\nOperating System: " << operating_system << "\n";
}

ConsoleGames::ConsoleGames(std::string title, float price, std::string console_type) {
		this->title = title;
		this->price = price;
		this->console_type = console_type;
	}

void ConsoleGames::display() {
	std::cout << "Title: " << title << "\nPrice: " << price << "\nConsole Type: " << console_type << "\n";
}