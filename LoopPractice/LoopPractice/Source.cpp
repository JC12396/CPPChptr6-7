#include <iostream>
#include < time.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
	int pickBook = 0;
	int secretBook;
	int count = 0;
	int again;

	srand(time(NULL));
	secretBook = rand() % 57 + 1;
	do {
		cout << "Welcome to Welcome To!!\n";
		cout << "There is a magic book, but only one.\n If you do not find it you DIE!\n";


		while (pickBook != secretBook && count != 5)
		{
			cout << "Choose >> ";
			cin >> pickBook;
			if (pickBook < secretBook)
			{
				cout << "The number was too low. \n";
			}
			else if (pickBook > secretBook)
			{
				cout << "Number is too high. \n";

			}
			else if (pickBook == secretBook)
			{
				cout << "No my favorite book. ";
			}
			count = count + 1;
		}
		if (count == 2)
		{
			cout << "Your are dead by ISIS. \n";
		}
		else
		{
			cout << "Hey nice book. ";

		}
		cout << "Would you like to play again? 1 - Yes 2 - No >> \n";
		cin >> again;
		pickBook = 0;
		count = 0;
	} while (again != 2);

	system("pause");
	return 0;
}