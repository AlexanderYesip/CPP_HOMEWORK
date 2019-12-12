#include<iostream>
using namespace std;
#define Массив_минимальное_и_максимальное_значение

void main()
{
	setlocale(LC_ALL, "");
#ifdef Массив_минимальное_и_максимальное_значение
	const int n = 5;
	int Arr[n] = {};
	for (int i = 0; i < n; i++)
	{
		cin >> Arr[i];
	}
	int min = Arr[0], max = Arr[0];
	for (int i = 0; i < n; i++)
	{
		if (Arr[i] < min)
		{
			min = Arr[i];
		}
		if (Arr[i] > max)
		{
			max = Arr[i];
		}
	}
	cout << "Минимальное: " << min << endl;
	cout << "Максимальное: " << max;
	cout << endl;
#endif Массив_минимальное_и_максимальное_значение
}