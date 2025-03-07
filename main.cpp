#include <iostream>
#include "Operators.h"
#include "Numbers.h"
#include "Add.h";
#include "Sub.h";

using namespace std;

int main() {

	std::string op = Opeators::randomOperator();
	
	long nums1 = Numbers::GenNums(1, 10);
	long nums2 = Numbers::GenNums(1, 5);

	long addNums = Add(nums1, nums2);
	long subNums = Sub(nums1, nums2);



	return 0;
}