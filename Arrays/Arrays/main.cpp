#include<iostream>
using namespace std;
#define ������_�����������_�_������������_��������

void main()
{
	setlocale(LC_ALL, "");
#ifdef ������_�����������_�_������������_��������
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
	cout << "�����������: " << min << endl;
	cout << "������������: " << max;
	cout << endl;
#endif ������_�����������_�_������������_��������
}