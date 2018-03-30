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
int valuedTerms(int k){
	if (k % 2 == 0) {
		return k;
	}
	else return 0;
}

void evenFibonacciTerms(){
	int n;
	cout << "put number: ";
	cin >> n;
	int i = 1, j = 2, k = 3, sum = 0;
	while (i < n && j < n && k < n) {
			sum += valuedTerms(k);
		i = j;
		j = k;
		k = i + j;

	}
	cout << endl << sum;
}