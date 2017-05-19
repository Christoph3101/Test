#include <iostream>

using namespace std;

main ()
{
	float a;
	float b;
	
	cout << "Geben Sie einen Wert fuer 'a' ein: a=";
	cin >> a;
	cout << endl;
	cout << "Geben Sie einen Wert fuer 'b' ein: b=";
	cin >> b;
	cout << endl;
	
	int Summe;
	Summe = a + b;
	
	int Differenz;
	Differenz = a - b;
	
	int Produkt;
	Produkt = a * b;

	cout << "Summe=" << Summe << endl;
	cout << "Differenz=" << Differenz << endl;
	cout << "Produkt=" << Produkt << endl;
	
	if (b != 0)
	{
	float Quotient;
		Quotient = a/b;
		cout << "Quotient=" << Quotient << endl;
	}
	
	else 
	{
		cout << "Quotient nicht definiert" << endl;
	}
	
	return 0;
}