#include <iostream>
using namespace std;

#define G1
#define G2
#define G3
#define G4
#define G5
#define G6

void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "¬ведите размер: ";
	cin >> n;

#ifdef G1
	for (int i = 0; i < n; i++)
	{

		for (int j = 0; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif G1

#ifdef G2
	for (int i = 0; i < n; i++)
	{

		for (int j = 0; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif G2

#ifdef G3
	for (int i = 0; i < n; i++)
	{

		for (int j = i; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}


#endif G3

#ifdef G4
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << "  ";
		}
		for (int j = i; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}

#endif G4

#ifdef G5
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n - 1; j++)
		{
			cout << "  ";
		}
		for (int j = 0; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif G5

#ifdef G6
	for (int i = 0; i < n; i++)
	{
		if (n % 2 == 0)
		{
			if (i % 2 == 0)
			{
				for (int j = 0; j < n / 2; j++)
				{
					cout << "-+";
				}
			}
			if (i % 2 == 1)
			{
				for (int j = 0; j < n / 2; j++)
				{
					cout << "+-";
				}
			}
		}
		if (n % 2 == 1)
		{
			if (i % 2 == 0)
			{
				for (int j = 0; j < n / 2; j++)
				{
					cout << "-+";
				}
				cout << "-";
			}
			else
			{
				for (int j = 0; j < n / 2; j++)
				{
					cout << "+-";
				}
				cout << "+";
			}
		}
		cout << endl;
	}
#endif G6
}
