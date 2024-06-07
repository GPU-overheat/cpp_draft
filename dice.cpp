#include <iostream>
#include <cstdlib>
#include <ctime>

int main(void) {
	const auto minval = 1;
	const auto maxval = 6;

	srand(time(0));
	int dice1 = rand() % (maxval - minval + 1) + minval;
	int dice2 = rand() % (maxval - minval + 1) + minval;
	
	if (dice1 == dice2) {
		std::cout << "Jackpot!!!!!!!!\n" << "Both dices were: "<< dice1 << std::endl;
		return (EXIT_SUCCESS);
	}

	std::cout << "DICE 1: " << dice1 << std::endl << "DICE 2: " << dice2 << std::endl;

	std::cout << "you can move " << dice1 + dice2 << " units" << std::endl;

}