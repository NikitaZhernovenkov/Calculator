#include <iostream>
#include "Funcs.h"
using namespace std;
void EnterValues(float& a, float& b)
{
	cout << "Введите операнд А:";
	cin >> a;
	cout << "Введите операнд B:";
	cin >> b;
}
int main()
{
	setlocale(LC_ALL, "rus");
	int choice;
	float a, b;
	while (true)
	{
		cout << "1)Сумма" << endl;
		cout << "2)Умножение" << endl;
		cout << "3)Вычитание" << endl;
		cout << "4)Деление" << endl;
		cout << "5)Выход" << endl;
		cout << "Введите номер операции: ";
		cin >> choice;
		if (choice == 5)
		{
			break;
		}
		switch (choice)
		{
		case 1:
			EnterValues(a, b);
			cout <<"Ответ: " << Sum(a, b) << endl << endl;
			break;
		case 2:
			EnterValues(a, b);
			cout << "Ответ: " << Mul(a, b) << endl << endl;
			break;
		case 3:
			EnterValues(a, b);
			cout << "Ответ: " << Sub(a, b) << endl << endl;
			break;
		case 4:
			EnterValues(a, b);
			cout << "Ответ: " << Div(a, b) << endl << endl;
			break;
		default:
			cout << "Неверная операция"<<endl;
			break;
		}
	}
}