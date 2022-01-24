#include <iostream>
using namespace std;

int main()
{
	int arr[3], brr[3], s=0;
	cout << "";
	int n;
	cout << "¬вед≥ть значенн€ n = \n";
	cin >> n;
	for (int i = 0; i < 3; i++)
	{
		cout << "a[ " << i << " ]=" << endl;
		cin >> arr[i];
	}

	for (int i = 0; i < 3; i++)
	{
		cout << "a[ " << i<< " ]=" << endl;
		cin >> brr[i];
	}

	for (int i = 0; i < 3; i++)
	{
		s = s + arr[i] * brr[i];
		cout << "—кал€рний добуток вектор≥в = " << s << endl;
	}

	return 0;
}