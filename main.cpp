#include <iostream>
#include "Funcs.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int choice;
	float a, b;
	cout << "Введите операнд А:";
	cin >> a;
	cout << "Введите операнд B:";
	cin >> b;
	cout << "1)Сумма"<<endl;
	cout << "2)Умножение" << endl;
	cout << "3)Вычитание" << endl;
	cout << "4)Деление" << endl;
	cout << "Введите номер операции: ";
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
		cout << "Неверная операция";
		break;
	}
	system("pause");
}