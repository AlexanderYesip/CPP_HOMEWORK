#include<iostream>
#include<conio.h>
using namespace std;

//#define ШУТЕР
//#define БИЛЕТ
//#define ПАЛИНДРОМ

void main()
{
	setlocale(LC_ALL, "");
#ifdef ШУТЕР
	char key;
	do
	{
		key = _getch();
		if (key == 'a' || key == 'A' || key == 75)
		{
			cout << "Влево" << endl;
		}
		else if (key == 'w' || key == 'W' || key == 72)
		{
			cout << "ВВерх" << endl;
		}
		else if (key == 's' || key == 'S' || key == 80)
		{
			cout << "Вниз" << endl;
		}
		else if (key == 'd' || key == 'D' || key == 77)
		{
			cout << "Вправо" << endl;
		}
		else if (key == 32)
		{
			cout << "Прыжок" << endl;
		}
		else
		{
			cout << int(key);
		}
	} while (key != 27);
#endif ШУТЕР

#ifdef БИЛЕТ
	int num, sum1, sum2;
	sum1 = sum2 = 0;
	cout << "Введите номер билета: " << endl;
	cin >> num;
	while (num > 0)
	{
		if (num > 1000)
		{
			sum1 += num % 10;
		}
		else
		{
			sum2 += num % 10;
		}
		num /= 10;
	}
	if (sum1 == sum2)
	{
		cout << "Счасливый билет" << endl;

	}
	else
	{
		cout << "Не счасливый билет" << endl;
	}
#endif БИЛЕТ

#ifdef ПАЛИНДРОМ
	unsigned long long int num;
	cout << "Введите число: ";
	cin >> num;
	unsigned long long int buf = num;
	unsigned long long int rev = 0;
	while (buf > 0)
	{
		rev *= 10;
		rev += buf % 10;
		buf /= 10;
	}
	if (rev == num)
	{
		cout << "Число палиндром" << endl;
	}
	else
	{
		cout << "Число не палиндром" << endl;
	}
#endif ПАЛИНДРОМ
}