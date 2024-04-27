/*
This code writes number in an order (from 1 to entered number by user)

Developer = Barış Someroğlu
Date = 27.04
*/

#include <iostream>

using namespace std;

// Function prototype
void WriteOnScreen(int*);

int main()
{
	int Number;

	cout << "Please enter a number = ";
	cin >> Number;

	int* ptrNumber = &Number; // Pointer declaration

	cout << "\n";
	
	// Call function
	WriteOnScreen(&Number);

	return 0;
}

// Function definition
void WriteOnScreen(int* ptrNumber)
{
	for (int i = 1; i <= *ptrNumber; i++)
	{
		cout << i << endl;
	}
}
