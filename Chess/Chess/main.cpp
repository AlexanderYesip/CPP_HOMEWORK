#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "¬ведите размер квадрата: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int s = 0; s < n; s++)
			{
				for (int a = 0; a < n; a++)
				{
					if ((i + s) % 2 == 0)
					{
						cout << "* ";
					}
					else
					{
						cout << "  ";
					}
				}
			}
			cout << endl;
		}
	}
}