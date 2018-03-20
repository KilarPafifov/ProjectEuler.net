#include"stdafx.h"
#include"task1.h"

int multiples(int upperBound) {
	int sum = 0;
	for (int j = 3; j < upperBound; j++) {
		if (j % 3 == 0 || j % 5 == 0) {
			sum += j;
		}
	}
	return sum;
}