// ProjectEuler.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "task1.h"
#include <iostream>
using namespace std;

int main()
{
	if (test_task1()) {
		cout << "ok";
	}
	else
	{
		cout << "no";
	}
	system("pause");
    return 0;
}

