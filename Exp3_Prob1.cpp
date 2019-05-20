#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;
int main ()
{
	int maxnum, minnum, element;
	float sum, avenum;
	int arr [10];
	int i = 10;
	
	cout << "\n" << "Enter the (10) elements with spaces: ";
	
    for (element= 0; element < i; element++) cin >> arr[element];
    maxnum = arr[0];
    for (element = 0; element < i; element++)
    {
        if (maxnum < arr[element])
            maxnum = arr[element];
    }
    minnum = arr[0];
    for (element = 0; element < i; element++)
    {
        if (minnum > arr[element])
            minnum = arr[element];
    }
    
    cout << "\n\nThe largest integer: " << maxnum << endl << endl;
    cout << "The smallest integer: " << minnum << endl << endl;
    
    for (int element=0; element < i; element++)
    sum += arr[element];
    cout << "The sum of the integers: " << sum << endl << endl;
    
    avenum = sum/10;
    cout << "The average of the integers: " << avenum;

	_getch();
	return 0;
}
