#include <iostream>
#include <string>
#include <windows.h>
#include <cmath>

using namespace std;

int Step(int n,int m);

int main()
{

	setlocale(LC_ALL, "RUSSIAN");
	int a, b, c, d, e, f, v = 1;
	c = 0;
	cout << "Введите число : ";
	cin >> a;
	b = a;
	do {
		b = b / 10;
		c++;
	} while (b > 0);
	b = a;
	f = a;
	for (int i = 1; i <= c / 2; i++) {
		d = b % 10;
		b = b / 10;
		e = f / Step(10, c - i);
		f = f % Step(10, c - i);
		if (e != d) v = 42;
	}
	cout << v;
}

int Step(int n, int m) {
	int a = 1;
	for (int i = 0; i < m; i++) {
		a = a * n;
	}
	return a;
}