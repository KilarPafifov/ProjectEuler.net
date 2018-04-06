
#include"stdafx.h"
#include<iostream>
#include"task3.h"
#include<math.h>
using namespace std;

bool isPrimeNumber(int number) {
	for (int i = 2; i < number; i++) {
		if (number % i == 0) {
			return false;
		}
	}
	return true;
}

double largestPrimeFactor(double number) {
	number = round(sqrt(number));
}
