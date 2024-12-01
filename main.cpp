#include <iostream>
#include "sdt.h"
#include <clocale>

using namespace std;

//Программа является учебной

int main() {
	setlocale(LC_ALL, "RUS");


	int a1, a2;


	cout << "Введите первое число:" << endl;
	cin >> a1;
	cout << "Введите второе число:" << endl;
	cin >> a2;

	cout << "сумма:" << a1 + a2 << endl;
	system("pause");

}