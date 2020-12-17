#include <iostream>
#include <vector>
#include <string>
#include "homework_4.h"


int main() {

	std::vector<float> v = {1., 2.5, 3.};

	ipb::named_vector<float> my_named_vector = {v, "Stars war"};

	std::cout << my_named_vector.size() << std::endl;

	// my_named_vector.name() = "";
	
	// std::cout << my_named_vector.size() << std::endl;
	
	std::cout << ipb::accumulate(my_named_vector, 0.0f) << std::endl;

	return 0;
}