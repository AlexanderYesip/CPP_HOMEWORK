#include<iostream>
#include<conio.h>
using namespace std;

//#define �����
//#define �����
//#define ���������

void main()
{
	setlocale(LC_ALL, "");
#ifdef �����
	char key;
	do
	{
		key = _getch();
		if (key == 'a' || key == 'A' || key == 75)
		{
			cout << "�����" << endl;
		}
		else if (key == 'w' || key == 'W' || key == 72)
		{
			cout << "�����" << endl;
		}
		else if (key == 's' || key == 'S' || key == 80)
		{
			cout << "����" << endl;
		}
		else if (key == 'd' || key == 'D' || key == 77)
		{
			cout << "������" << endl;
		}
		else if (key == 32)
		{
			cout << "������" << endl;
		}
		else
		{
			cout << int(key);
		}
	} while (key != 27);
#endif �����

#ifdef �����
	int num, sum1, sum2;
	sum1 = sum2 = 0;
	cout << "������� ����� ������: " << endl;
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
		cout << "��������� �����" << endl;

	}
	else
	{
		cout << "�� ��������� �����" << endl;
	}
#endif �����

#ifdef ���������
	unsigned long long int num;
	cout << "������� �����: ";
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
		cout << "����� ���������" << endl;
	}
	else
	{
		cout << "����� �� ���������" << endl;
	}
#endif ���������
}