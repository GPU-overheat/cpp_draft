#include <iostream>

void clearConsole() {
	#ifdef _WIN32
    	system("cls");
	#else
    	system("clear");
	#endif
}


int main(int ac, char **av) {
	if (ac == 2) {
		int salary = std::stoi(av[1]);

		clearConsole();
		std::cout << "Your salary is " << salary << std::endl;
		std::cout << "The state tax you should pay is "<< salary * 4 / 100 << std::endl;
		std::cout << "The country tax you should pay is "<< salary * 2 / 100 << std::endl;
		std::cout << "Your salary after tax is " << salary - ((salary * 4 / 100) + (salary * 2 / 100)) << std::endl;
	}
	else
		std::cout << "Enter a valid number as salary." << std::endl;

}