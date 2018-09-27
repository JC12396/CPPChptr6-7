#include <iostream>
#include < time.h>

using namespace std;

int main()
{
	int choice;
	int random;
	int again;

	do {
		srand(time(NULL));
		random = rand() % 3 + 1;

		cout << "1 - Rock\n2 - Paper\n3 - Scissors" << endl;
		cin >> choice;

		if (choice == random)
		{
			cout << "You lost" << endl;
		}
		else if (choice == 1 && random == 2)
		{
			cout << "You lost" << endl;
		}
		else if (choice == 1 && random == 3)
		{
			cout << "You Won" << endl;
		}
		else if (choice == 2 && random == 1)
		{
			cout << "You Won" << endl;
		}
		else if (choice == 2 && random == 3)
		{
			cout << "You lost" << endl;
		}
		else if (choice == 3 && random == 2)
		{
			cout << "You Won" << endl;
		}
		else if (choice == 3 && random == 1)
		{
			cout << "You lost" << endl;
		}
		else
		{
			cout << "INVALID" << endl;
		}
		cout << "Again?\n1- Yes\n2 - No" << endl;
		cin >> again;

	}while (again != 2);

	system("pause");
	return 0;

}