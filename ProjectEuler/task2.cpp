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

void testSumOfEvenFibonacciTerms(){
	int n = sumOfEvenFibonacciTerms(10);
	if (n != 10) {
		cout << "wrong!" << endl;
	}

	n = sumOfEvenFibonacciTerms(0);
	if (n != 0) {
		cout << "wrong!" << endl;
	}

	n = sumOfEvenFibonacciTerms(-10);
	if (n != 0) {
		cout << "wrong!" << endl;
	}
}


