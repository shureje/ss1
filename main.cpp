#include <iostream>
#include "sdt.h"
#include <clocale>

using namespace std;



int main() {
	setlocale(LC_ALL, "RUS");


	int a1, a2;


	cout << "������� ������ �����:" << endl;
	cin >> a1;
	cout << "������� ������ �����:" << endl;
	cin >> a2;

	cout << "�����:" << a1 + a2 << endl;
	cout << "��������:" << a1 - a2 << endl;
	system("pause");

}