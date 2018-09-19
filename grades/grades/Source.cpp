#include <iostream>
#include <string>

using namespace std;

int main()
{
	char grade = ' ';
	string result;

	cout << "Enter your letter grade so we can judge you: ";
	cin >> grade;

	grade = toupper(grade);

	switch (grade)
	{
	case 'A':
		result = "Excellent";
		break;
	case 'B':
		result = "Try harder";
		break;
	case 'C':
		result = "Average for some!";
		break;
	case 'D':
	case 'F':
		result = "Good luck at McDonald's :-)";
		break;
	default:
		result = "Not Valid";
	}//end switch

	cout << result;

	system("pause");
	return 0;



}