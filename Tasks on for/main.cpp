#include<iostream>
using namespace std;

//#define ���������
//#define �������
//#define �������_ASCII
//#define �������_���������
//#define �������_�����

void main()
{
	setlocale(LC_ALL, "");
#ifdef ���������
	int a, b = 1;
	cin >> a;
	for (int i = 1; i <= a; i++)
	{
		b = b * 1;
	}
	cout << b;
#endif ���������

#ifdef �������
	int a, b , c, d;
	cout << "������� �����: ";
	cin >> a;
	cout << "������� �������: ";
	cin >> b;
	for (c = 0; c < d; c++)
	{
		d = d * a;
	}
	cout << d;
#endif ������

#ifdef �������_ASCII
	for (int i = 1; i <= 256; i++)
	{
		cout << char(i) << "\t";
	}
#endif �������_ASCII

#ifdef �������_��������� 
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			cout << i << "*" << j << "=" << i * j << endl;
		}
	}
#endif �������_��������� 

#ifdef �������_�����
	bool simple;
	simple = true;
	int a;
	cin >> a;
	for (int i = 1; i <= a; i++)
	{
		simple = true;
		for (int b = 2; b < i; b++)
		{
			if (i % b == 0)
			{
				simple = false;
			}
		}
		if (simple)
		{
			cout << i << endl;
		}
	}
#endif �������_�����
}