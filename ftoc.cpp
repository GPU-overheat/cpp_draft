#include <iostream>

int main(int ac, char **av) {
	if (ac == 2) {
		int fahr = std::stoi(av[1]);
		double cel = 5 * (fahr - 32) / 9;
		std::cout << "The Celsius value is: "<< cel << std::endl;
	}
	else 
		std::cout  << "Enter a valid Celsius value." << std::endl;
}