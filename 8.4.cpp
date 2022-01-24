#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	const int n = 5;
	int arr[n],i;
	// заповнення масиву випадковими даними:
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 21;
	}
	// Виведення всього масиву:
	cout << "Всі елементи масиву a:" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}

	cout << "Всі елементи зміненого масиву a:" << endl;
	for (int i = 0; i < n; i++)
	{
		if (i % 2 != 0)
		{
			arr[i] = 0;
		}
		else
		{
			arr[i] = 1;
		}
		cout << arr[i] << "\t";
	}
	return 0;
}