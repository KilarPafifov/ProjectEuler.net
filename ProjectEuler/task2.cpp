#include"task2.h"
#include"stdafx.h"
#include<iostream>
using namespace std;
int fibonacci(int n) {
	if (n == 1 || n == 2) {
		return 1;
	}
	return fibonacci(n - 1) + fibonacci(n - 2);
}
bool isEven(int k){
	if (k % 2 == 0) {
		return true;
	}
	else {
		return false;
	}
}

int sumOfEvenFibonacciTerms(int upperBound){
	int sum = 0;
	int i = 1;
	int sequenceMember = fibonacci(i);
	while (sequenceMember < upperBound){
		if (isEven(sequenceMember)) {
			sum += sequenceMember;
		}
		i++;
		sequenceMember = fibonacci(i);
	}
	return sum;
}

bool testSumOfEvenFibonacciTerms(){
	if (sumOfEvenFibonacciTerms(10) != 10) {
		return false;
	}
	if (sumOfEvenFibonacciTerms(0) != 0) {
		return false;
	}
	if (sumOfEvenFibonacciTerms(-10) != 0) {
		return false;
	}
	return true;
}


