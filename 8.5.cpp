#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	const int n = 5;
	int arr[n], i, index, min;

	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 31-10;
	}
	
	cout << "Всі елементи масиву a:" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
		cout << " ";
	}
	index = 0;
	for (i = 1; i < n; i++)
	{
		if (i % 2 != 1)
		{
			if (min > arr[i])
			{
				min = arr[i];
				index = i;
				cout << "Мінімальне значення масиву серед всіх непарних чисел = " << min << endl;
				cout << "Та його індекс = " << min << endl;
			}
		}
	}

	return 0;
}
