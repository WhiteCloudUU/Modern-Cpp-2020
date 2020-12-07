#include <iostream>
#include <cstdlib>
#include <filesystem>
namespace fs = std::filesystem;

int main(int argc, char * argv[]) {
	if (argc != 3) {
		std::cerr << "Not enough inputs." << std::endl;
       	exit(EXIT_FAILURE);
	}

	auto file1 = fs::path(argv[1]);
	auto file2 = fs::path(argv[2]);

	int num1 = std::stoi(file1.stem());
	int	num2 = std::stoi(file2.stem());


	if (file1.extension() == ".txt" 
		&& file2.extension() == ".txt") {

		std::cout << (num1 + num2) / 2 << std::endl;

	} else if (file1.extension() == ".png" 
				&& file2.extension() == ".png") {

		std::cout << (num1 + num2)<< std::endl;

	} else if (file1.extension() == ".txt" 
				&& file2.extension() == ".png") {
		std::cout << (num1 % num2) << std::endl;
	} else {

		std::cerr << "Incorrect file extensions." << std::endl;
       	exit(EXIT_FAILURE);

	}


	return EXIT_SUCCESS;
}