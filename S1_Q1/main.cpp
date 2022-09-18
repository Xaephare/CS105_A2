#include <iostream>

class HealthActivity {

private:
	std::string user_name;
	int steps;
	double kilometres;

public:
	HealthActivity() {
		user_name = "";
		steps = 0;
		kilometres = 0.0;
	}
	HealthActivity(std::string user_name, int steps, double km) {

		this->user_name = user_name;
		this->steps = steps;
		this->kilometres = km;
	}

	void display() {

		std::cout << "Name: " << get_user_name() << std::endl;
		std::cout << "Steps: " << get_steps() << " steps" << std::endl;
		std::cout << "Walking + Running: " << get_kilometres() << " km" << std::endl;
		std::cout << std::endl;
	}

	//Setters

	void set_user_name(std::string user_name) {

		this->user_name = user_name;
	}

	void set_steps(int steps) {

		this->steps = steps;
	}

	void set_kilometres(double km) {

		this->kilometres = km;
	}

	//Getters

	int get_steps() {

		return steps;
	}

	double get_kilometres() {

		return kilometres;
	}

	std::string get_user_name() {

		return user_name;
	}

};

void set_function(HealthActivity* health_object_ptr, int arr_size) {

	std::string user_name;
	int steps;
	double km;

	for (int i = 0; i < arr_size; i++) { //asking for input as many times as there are users.

		std::cout << "\nEnter the name, number of steps, and walking + running distance:";
		std::cin >> user_name;
		std::cin >> steps;
		std::cin >> km;
		(health_object_ptr + i)->set_user_name(user_name);
		(health_object_ptr + i)->set_steps(steps);
		(health_object_ptr + i)->set_kilometres(km);
	}
}

//getFunction displays all user values and also calculates and displays the averages
void get_function(HealthActivity* health_object_ptr, int arr_size) { //pass the array into the function as a pointer

	int steps_sum = 0;
	double distance_sum = 0;

	for (int i = 0; i < arr_size; i++) { //iterating through the array

		(health_object_ptr + i)->display();

		steps_sum += (health_object_ptr + i)->get_steps(); //adding steps for all users
		distance_sum += (health_object_ptr + i)->get_kilometres(); //adding km for all users
	}

	std::cout << "Average steps of " << arr_size << " users: " << steps_sum / arr_size << " steps" << std::endl;
	std::cout << "Average distance of walking + running of " << arr_size << " users: " << distance_sum / arr_size << " km" << std::endl;
}
int main() {

	int const users = 5; //number of users - set to 5 because the brief requests it

	HealthActivity health_obj[users]; //object array of size set on line 103
	HealthActivity* health_obj_ptr = health_obj; //pointer to an array of health activity objects.

	set_function(health_obj_ptr, users);
	get_function(health_obj_ptr, users);

	return 0;
};