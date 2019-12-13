#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n], minRand, maxRand;
	bool a;
	cout << "Введите минимальное возможное случайное число: "; cin >> minRand;
	cout << "Введите максимальное возможное случайное число: "; cin >> maxRand;

	for (int i = 0; i < n; i++)
	{
		cout << (arr[i] = rand() % (maxRand - minRand + 1) + minRand) << "\t";
	}
	cout << endl;

	for (int i = 0; i < n; i++)
	{
		int c = 1;
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] == arr[j])
			{
				c++;
			}
		}

		if (c > 1)
		{
			continue;
		}

		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				c++;
			}
		}

		if (c > 1)
		{
			cout << "Число " << arr[i] << " Повторилось " << c << " раз" << endl;
		}
	}

}