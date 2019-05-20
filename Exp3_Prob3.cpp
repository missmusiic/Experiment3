#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
	int size, i, j;
	int temp;
	char arr[50];

	cout << "Array Size: "; cin >> size;
	cout << "\n";
	
	cout << "Enter " << size << " characters: ";
	for (i=0; i<size; i++)
	{ cin >> arr[i]; }
	
	j = i - 1;
	i = 0;

	while(i<j)
	{
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		i++;
		j--;
	}

	cout<<"\nReverse Array: ";
	
	for(i=0; i<size; i++)
	{ cout << arr[i]; }
	
	_getch();
	return 0;
	
}
