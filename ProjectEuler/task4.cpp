
#include"stdafx.h"
#include<iostream>
using namespace std;
/*

A palindromic number reads the same both ways.
The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
Find the largest palindrome made from the product of two 3-digit numbers.

*/



bool isPalindrome(int number) {
	int n = number;
	long int* mas = new long int[n];
	int p = 0;
	while (number > 10) {
		mas[p] = number % 10;
		number /= 10;
		p++;
	}
	mas[p + 1] = number;

	for (int i = 0; i < n / 2; i++) {
		for (int j = n - 1; j > n / 2; j--) {
			if (mas[i] != mas[j]) {
				return false;
			}
		}
	}
	return true;
}

int main() {
	cout << isPalindrome(999999);
	/*long long int largestPalindrome = 0;
	int l = 0;
	for (int i = 100; i < 999; i++) {
	for (int j = 100; j < 999; j++) {
	l = i * j;
	if (isPalindrome(l) == true) {
	largestPalindrome = i * j;
	}
	}
	}
	cout << largestPalindrome;*/
	system("pause");
}