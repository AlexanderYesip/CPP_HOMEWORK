#include<iostream>
using namespace std;

//#define ÔÀÊÒÎÐÈÀË
//#define ÑÒÅÏÅÍÜ
//#define ÒÀÁËÈÖÀ_ASCII
//#define ÒÀÁËÈÖÀ_ÓÌÍÎÆÅÍÈß
//#define ÏÐÎÑÒÛÅ_×ÈÑËÀ

void main()
{
	setlocale(LC_ALL, "");
#ifdef ÔÀÊÒÎÐÈÀË
	int a, b = 1;
	cin >> a;
	for (int i = 1; i <= a; i++)
	{
		b = b * 1;
	}
	cout << b;
#endif ÔÀÊÒÎÐÈÀË

#ifdef ÑÒÅÏÅÍÜ
	int a, b , c, d;
	cout << "Ââåäèòå ÷èñëî: ";
	cin >> a;
	cout << "Ââåäèòå ñòåïåíü: ";
	cin >> b;
	for (c = 0; c < d; c++)
	{
		d = d * a;
	}
	cout << d;
#endif ÑÒÅÏÍÜ

#ifdef ÒÀÁËÈÖÀ_ASCII
	for (int i = 1; i <= 256; i++)
	{
		cout << char(i) << "\t";
	}
#endif ÒÀÁËÈÖÀ_ASCII

#ifdef ÒÀÁËÈÖÀ_ÓÌÍÎÆÅÍÈß 
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			cout << i << "*" << j << "=" << i * j << endl;
		}
	}
#endif ÒÀÁËÈÖÀ_ÓÌÍÎÆÅÍÈß 

#ifdef ÏÐÎÑÒÛÅ_×ÈÑËÀ
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
#endif ÏÐÎÑÒÛÅ_×ÈÑËÀ
}