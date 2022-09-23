#pragma once

#include <iostream>
#include <string>


class VideoGame {

protected:
	std::string title;
	float price;
public:
	int obj_count;
	VideoGame();
	virtual void display();
};

class ComputerGames : public VideoGame {
	std::string operating_system;
public:
	ComputerGames(std::string title, float price, std::string operating_system);
	void display();
};

class ConsoleGames : public VideoGame {
	std::string console_type;
public:
	ConsoleGames(std::string title, float price, std::string console_type);
	void display();
};