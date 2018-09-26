
#include <string>
#include <iostream>
#include < time.h>
#include <stdio.h>
#include <stdlib.h>
#include <chrono>
#include <thread>
#include <random>
using namespace std;

int main()
{
	int number;
	for (int i = 0; i < 10; i++)
	{
		srand(time(NULL));
		number = rand() % 100 + 1;

		cout << number << endl;

	}

	system("pause");
	return 0;
}