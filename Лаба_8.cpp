#include <iostream>
using namespace std;

int main()
{
   int arr[20], min, d=1;
   cout << "";
   int n;
   cout << "Введіть значення n = \n";
   cin >> n;
   for (int i = 0; i < 20; i++)
   {
	   cout << "a[ " << i << " ]=" << endl;
	   cin >> arr[i];
   }

   //Пошук мінімуму
   min = arr[0];
   for (int i = 1; i < 20; i++)
	   if (min > arr[i])
		   min = arr[i];
   cout << "Мінімальне значення = " << min << endl;

   //Пошук добутку
   for (int i = 0; i < 20; i++)
	   if (arr[i] > 0)
		   d = d * arr[i];
   cout << "Добуток всіх додатніх чисел = " << d << endl;

   return 0;
}
