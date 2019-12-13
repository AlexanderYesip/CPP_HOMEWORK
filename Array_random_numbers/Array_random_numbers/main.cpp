#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n], minRand, maxRand, ite = 0;

	do
	{
		system("CLS");
		cout << "¬ведите минимальное возможное случайное число: " << endl;
		cin >> minRand;
		cout << "¬ведите максимальное возможное случайное число: " << endl;
		cin >> maxRand;
		system("CLS");
		if (minRand >= maxRand)
		{
			system("pause");
		}
	} while (minRand >= maxRand);

	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand + 1;
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				arr[i] = rand() % (maxRand - minRand) + minRand + 1;
				j = -1;
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
			ite++;
		}
	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	cout << " оличество итерацый: " << ite;
}