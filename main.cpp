#include <iostream>
#include "Funcs.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int choice;
	float a, b;
	cout << "������� ������� �:";
	cin >> a;
	cout << "������� ������� B:";
	cin >> b;
	cout << "1)�����"<<endl;
	cout << "2)���������" << endl;
	cout << "3)���������" << endl;
	cout << "4)�������" << endl;
	cout << "������� ����� ��������: ";
	cin >> choice;
	switch (choice)
	{
	case 1:
		cout << Sum(a, b) << endl;
		break;
	case 2:
		cout << Mul(a, b) << endl;
		break;
	case 3:
		cout << Sub(a, b) << endl;
		break;
	case 4:
		cout << Div(a, b) << endl;
		break;
	case 5:
		break;
	default:
		cout << "�������� ��������";
		break;
	}
	system("pause");
}