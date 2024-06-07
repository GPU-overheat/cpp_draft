#include <iostream>
#include <cmath>
#include <cstdlib>

int main(int ac,char **av) {
	if (ac == 2) {
		double pi = 3.14;
		double radius = std::stod(av[1]);
		double area = pow(radius, 2) * pi;
		std::cout << "The are of the circle is: " << area << std::endl;
	}
	else
		std::cout << "Enter a valid radius." << std::endl;
	return (EXIT_SUCCESS);
}