#include <iostream>
#include <time.h>
#include <stdio.h>

namespace Numbers {


	int GenNums1(int a) 
	{


		srand(time(0) + 1);

		return rand() % a + 8;

	}

	int GenNums2(int a) 
	{


		srand(time(0) + 1);

		return rand() % a + 1;

	}



}