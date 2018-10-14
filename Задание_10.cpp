#include <iostream>
#include <string>
#include <windows.h>
#include <cmath>

using namespace std;

int Fib(int n);
int main()
{

	setlocale(LC_ALL, "RUSSIAN");

	int a, n = -1;
	cout << "Введите число : ";
	cin >> a;
	for (int i = 2; Fib(i) <= a; i++) {
		if (Fib(i) == a) {
			cout << i + 1;
			n++;
		}
	}
	if (n == -1) cout << n;
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