#include <iostream>
#include "Operators.h"
#include "Numbers.h"
#include "Add.h";
#include "Sub.h";
#include "Mul.h"

using namespace std;

long id;
long answer;

int main() {

	std::string op = Opeators::randomOperator();
	

	long nums1 = Numbers::GenNums1(10);
	long nums2 = Numbers::GenNums2(5);

	long addNums = Add::AddNums(nums1, nums2);
	long subNums = Subs::Sub(nums1, nums2);
	long mulNums = Mul::Mul(nums1, nums2);

	std::cout << "What is: " << (nums1) << " "
		<< op << " " << (nums2) << endl;


	std::cout << "Enter Answer: " << endl;

	std::cin >> answer;

	if (op == "+" && answer == addNums) {

		std::cout << "Correct" << "\n";
	}
	else 
	{
		std::cout << "Answer is: " << addNums << "\n";
	}

	if (op == "-" && answer == subNums) {

		std::cout << "Correct" << "\n";
	}

	else
	{
		std::cout << "Answer is: " << subNums << "\n";
	}


	if (op == "*" && answer == mulNums) {

		std::cout << "Correct" << "\n";
	}

	else
	{
		std::cout << "Answer is: " << mulNums << "\n";
	}


	system("pause > 0");
	return 0;
}