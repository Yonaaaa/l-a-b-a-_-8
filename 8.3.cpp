#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	const int n = 10;
	int arr[n], brr[n], crr[n];

	// ���������� ������ ����������� ������:
	for (int i = 0; i < n; i++) 
	{
		arr[i] = and()% 21-10;
	}
	// ��������� ������ ������:
	cout << "�� �������� ������ a:" << endl;
	for (int i = 0; i < n; i++) 
	{
		cout << arr[i] << "\t";
	}

	for (int i = 0; i < n; i++)
	{
		brr[i] = rand() % 21 - 10;
	}
	
	cout << "�� �������� ������ b:" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << brr[i] << "\t";
	}

	for (int i = 0; i < n; i++)
	{
		crr[i] = arr[i] - brr[i];
		cout << "�� �������� ������ c:" << endl;
		for (int i = 0; i < n; i++)
		{
			cout << crr[i] << "\t";
		}
	}
	return 0;
}