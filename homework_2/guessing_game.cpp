#include <iostream>
#include <random>
#include <cstdlib>

int main() {

	std::random_device rd;
	std::uniform_int_distribution<int> dist(0, 99);
	int random, guess;

	random = dist(rd);
	std::cout << "Please make a guess from 0 to 99: ";
	std::cin >> guess;
	while (true) {
		
		if(std::cin.fail()) { 
			std::cerr << "[WARNING] : Number must be between 0 and 99" << std::endl;
			return EXIT_FAILURE;
		} else {

			if (guess == random) {
				std::cout << random << " is the target number" << std::endl;
				return EXIT_SUCCESS;
			} else if (guess > random) {
				std::cout << "Make a smaller guess: ";
				std::cin >> guess;
			} else {
				std::cout << "Try bigger: ";
				std::cin >> guess;
			}
		}


		
	}

	return EXIT_SUCCESS;
}