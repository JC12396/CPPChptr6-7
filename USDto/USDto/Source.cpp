#include <iostream>
#include <string>
using namespace std;

int main()
{
	double americanCurrency;
	double britishPound;
	double mexicanPeso;
	double japaneseYen;
	double canada;
	double euro;
	double rupee;
	double rand;


	cout << "How much USD are you converting?";
	cin >> americanCurrency;

	britishPound = americanCurrency * .6318;
	mexicanPeso = americanCurrency * 12.8863;
	canada = americanCurrency * .9813;
	euro = americanCurrency * .757;
	rupee = americanCurrency * 52.53;
	rand = americanCurrency * 7.7522;
	japaneseYen = americanCurrency * 82.34;

	cout << americanCurrency << " USD is converted to " << britishPound << " British Pounds\n" << mexicanPeso << " Mexican Peso's\n" << japaneseYen << " Japanese Yen\n" << euro << " Euros\n" << rupee << " Rupees\n" << rand << " Rand\n" << canada << " Canada\n" << endl;

	system("pause");

	return 0;
}