#include <iostream>
#include <string>
#include <windows.h>
#include <cmath>
#include <stdlib.h>

using namespace std;

int Fib(int n);
int main()
{

	setlocale(LC_ALL, "RUSSIAN");
	cout << "Введите число : ";
	int a;
	cin >> a;
	cout << Fib(a - 1);
}
int Fib(int n) {
	int a = 0, b = 1, c;
	for (int i = 0; i <= n - 2; i++) {
		c = a + b;
		a = b;
		b = c;
	}
	return (c);
}

