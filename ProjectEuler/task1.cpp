#include"stdafx.h"
#include"task1.h"
#include<iostream>
using namespace std;

int multiples(int upperBound) {
	int sum = 0;
	for (int j = 3; j < upperBound; j++) {
		if (j % 3 == 0 || j % 5 == 0) {
			sum += j;
		}
	}
	return sum;
}

void test_task1() {
	int n = 0;
	n = multiples(10);
	if (n != 23) {
		cout << "faileds!";
	}
	else
		if (n = 23) {
			cout << "perfect";
		}
}