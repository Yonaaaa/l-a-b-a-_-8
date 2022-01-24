#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	const int n = 7;
	int arr[n], i, d = 1,sq;
	double ser;

	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 4 - 1;
	}

	cout << "Всі елементи масиву a:" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
		cout << " ";
	}

	if (0.5 <= arr[i] <= 1)
	{
		for (int i = 0; i < n; i++)
		{
			d = d * arr[i];
			sq = sqrt(d);
			ser = pow(sq, n);
			cout << "Середнє геометричне чисел від 0.5-1 = " << ser << endl;
		}
		
	}
	return 0;
}