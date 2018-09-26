#include <iostream>
#include < time.h>
#include <stdio.h>
#include <stdlib.h>
#include <chrono>
#include <thread>

using namespace std::chrono;
using namespace std::this_thread;
using namespace std;

int main()
{
	int pickBook = 0;
	int secretBook;
	int count = 0;
	int again;

	cout << "Choose >> ";
	cin >> pickBook;

	

	do {
		srand(time(NULL));
		secretBook = rand() % 100 + 1;
		if (secretBook == pickBook) {
			cout << "DIE\n";

		}
		else {
			cout << "die\n";
		}

		cout << secretBook << "\n";
		sleep_for(nanoseconds(1));
	} while (secretBook != pickBook);
	system("pause");
	return 0;
}