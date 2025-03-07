#pragma once

#include <iostream>
#include <time.h>
#include <stdlib.h>

namespace Numbers {

	long GenNums(long a, long b) {

		srand(time(0));

		return rand() % a + 1;

	}


}