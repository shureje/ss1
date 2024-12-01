#include <iostream>
#include "sdt.h"
#include <clocale>

using namespace std;



int main() {
	setlocale(LC_ALL, "RUS");


	int a1, a2;


	cout << "¬ведите первое число:" << endl;
	cin >> a1;
	cout << "¬ведите второе число:" << endl;
	cin >> a2;

	cout << "сумма:" << a1 + a2 << endl;
	cout << "разность:" << a1 - a2 << endl;
	system("pause");

}