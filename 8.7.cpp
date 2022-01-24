#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	const int n = 3;
	int arr[n], i, sum, d=1;

	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 51;
	}

	cout << "Всі елементи масиву a:" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
		cout << " ";
	}

	sum = 0;                   
	for (i = 0; i < n; i++)
	{
		if ((i % 2) == 0 && arr[i] < arr[i+1])   // тут не знаю чи правильно поставила умову щоб було в пордку зростання
		{
			sum += arr[i];
			cout << sum;
		}
		if (5 <= arr[i] <= 15)
		{
			d = d * arr[i];
			cout << d;
		}
	}

	return 0;
}