
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

bool test_task1() {
	bool testOk = true;
	int n = multiples(-10);
	if (n != 0) {
		testOk = false;
	}
	n = multiples(0);
	if (n != 0) {
		testOk = false;
	}
	n = multiples(10);
	if (n != 23) {
		testOk = false;
	}
	return testOk;
}