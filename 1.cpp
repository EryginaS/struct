
//1. Используя записи, необходимо сложить и умножить два комплексных числа.

#define _CRT_SECURE_NO_WARNINGS
#include "stdafx.h"
#include <iostream>
#include<string>
#include<istream>
#include <Windows.h>
using namespace std;
struct compl {float x, y;};
struct event{int yaers, mounth;};
struct study { char name[50]; int ball; };
int main()
{
	SetConsoleCP(1251);// позволяет записывать русские символы в строки/массивы 
	SetConsoleOutputCP(1251);

	
	//1.
	setlocale(LC_ALL, "Russian");
	struct compl a, b, sum, proizvedenie;
	cout << "Число А: " << endl;
	cout << "Действительная часть: ";
	cin >> a.x;
	cout << "Мнимая часть:";
	cin >> a.y;
	cout << "Число B: " << endl;
	cout << "Действительная часть: ";
	cin >> b.x;
	cout << "Мнимая часть:";
	cin >> b.y;
	cout << "Число А: " << endl << a.x << "+i" << a.y << endl;
	cout << "Число B: " << endl << b.x << "+i" << b.y << endl;
	sum.x = a.x + b.x;
	sum.y = a.y + b.y;
	proizvedenie.x = a.x*b.x - a.y*b.y;
	proizvedenie.y = a.x*b.y + a.y*b.x;
	cout << endl;
	cout << "Сумма двух комплексных чисел: " << sum.x << "+i" << sum.y << endl;
	cout << "Произведение двух комплексных чисел: " << proizvedenie.x << "+i" << proizvedenie.y << endl;

	cout << endl;
	
	
	SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 7));
	system("pause");

    return 0;
}

