#include <iostream>
#include <string>

using namespace std;

int main()
{
	int ID;
	string result;

	cout << "Enter your ID number so we can judge you: ";
	cin >> ID;

	ID = toupper(ID);

	switch (ID)
	{
	case 102094:
		result = "Brosius";
		break;
	case 316338:
		result = "DeWilfond";
		break;
	case 138082:
		result = "Reis";
		break;
	case 313011:
		result = "Lang";
		break;
	case 154824:
		result = "Graap";
		break;
	case 137428:
		result = "Hancock";
		break;
	case 137220:
		result = "Gibson";
		break;
	case 145884:
		result = "France";
		break;
	case 306632:
		result = "Raker";
		break;
	case 154827:
		result = "Leunhagen";
		break;
	case 155706:
		result = "Chalupa";
		break;
	case 134125:
		result = "Pham Ho";
		break;
	case 318682:
		result = "Grady";
		break;
	case 155980:
		result = "Lofgren";
		break;
	case 137292:
		result = "Richards";
		break;
	case 137112:
		result = "Burton";
		break;


	default:
		result = "Not Valid";
	}//end switch

	cout << result;

	system("pause");
	return 0;
}