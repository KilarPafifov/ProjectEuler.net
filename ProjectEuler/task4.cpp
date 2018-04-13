#include"task4.h"
#include"stdafx.h"
#include<iostream>
#include<math.h>
using namespace std;

int dischargeOfNumber(int number){
	int k = 0;
	while (number != 0) {
		k += 1;
		number /= 10;
	}
	return k;
}

bool isPalindrome(unsigned long int number) {
	unsigned long int invertNumber = 0;
	unsigned long int copyNumber = number;
	
	while (copyNumber) {
		invertNumber *= 10;
		invertNumber += copyNumber % 10;
		copyNumber /= 10;
	}
	return invertNumber == number;
}
int task4() {
	int largestPalindrome = 0;
	for (int i = 100; i < 1000; i++) {
		for (int j = 100; j < 1000; j++) {
			if (isPalindrome(i * j)) {
				if (largestPalindrome < (i * j)) {
					largestPalindrome = i * j;
				}
			}
		}
	}
	return largestPalindrome;
}

