#include"task2.h"
#include"stdafx.h"
#include<iostream>
using namespace std;

void fibonacci() {
	int i = 1, j = 2, k = 3;
	while (i < 4000000 && j < 4000000 && k < 4000000) {
		if (k % 2 == 0) {
			cout << k << endl;
		}
		i = j;
		j = k;
		k = i + j;

	}
}
