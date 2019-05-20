#include <iostream>
#include <conio.h>
#include <iomanip>

const int days = 7;
using namespace std;
int main ()

{
	int i;
	float provinceA[7], provinceB[7], provinceC[7];
	
	cout << "Input the (7) temperatures for a week in each category:" << endl;
	for (i=0; i<days; i++)
	{
	cout << "Province A, Day " << i+1 << ": "; cin >> provinceA[i];
	}
	cout << "\n";
	for (i=0; i<days; i++)
	{
	cout << "Province B, Day " << i+1 << ": "; cin >> provinceB[i];
	}
	cout << "\n";
	for (i=0; i<days; i++)
	{
	cout << "Province C, Day " << i+1 << ": "; cin >> provinceC[i];
	}
	cout << "\n\n\n";
	
	cout << "Temperatures for Province A, B, and C for a week: \n" << endl;
	
	for (i=0; i<days; i++)
	{
		cout << "Province A, Day " << i+1 << ": " << provinceA[i] << endl;
	}
	cout << "\n";
	for (i=0; i<days; i++)
	{
		cout << "Province B, Day " << i+1 << ": " << provinceB[i] << endl;
	}
	cout << "\n";
	for (i=0; i<days; i++)
	{
		cout << "Province C, Day " << i+1 << ": " << provinceC[i] << endl;
	}
	
	_getch();
	return 0;
}
