#include <iostream>
#include "Funcs.h"
using namespace std;
void EnterValues(float& a, float& b)
{
	cout << "������� ������� �:";
	cin >> a;
	cout << "������� ������� B:";
	cin >> b;
}
int main()
{
	setlocale(LC_ALL, "rus");
	int choice;
	float a, b;
	while (true)
	{
		cout << "1)�����" << endl;
		cout << "2)���������" << endl;
		cout << "3)���������" << endl;
		cout << "4)�������" << endl;
		cout << "5)�����" << endl;
		cout << "������� ����� ��������: ";
		cin >> choice;
		if (choice == 5)
		{
			break;
		}
		switch (choice)
		{
		case 1:
			EnterValues(a, b);
			cout <<"�����: " << Sum(a, b) << endl << endl;
			break;
		case 2:
			EnterValues(a, b);
			cout << "�����: " << Mul(a, b) << endl << endl;
			break;
		case 3:
			EnterValues(a, b);
			cout << "�����: " << Sub(a, b) << endl << endl;
			break;
		case 4:
			EnterValues(a, b);
			cout << "�����: " << Div(a, b) << endl << endl;
			break;
		default:
			cout << "�������� ��������"<<endl;
			break;
		}
	}
}