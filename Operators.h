#include <iostream>
#include <vector>
#include <time.h>
#include <stdlib.h>


namespace Opeators {

	std::string randomOperator() {

		std::vector<std::string> operators;

		srand(time(0));

		operators.push_back("+");
		operators.push_back("-");
		operators.push_back("*");
		operators.push_back("/");

		int index = rand() % 4;

		return operators[index];
	}

}