#include <iostream>
#include <string>
#include <windows.h>
#include <cmath>

using namespace std;

int main()
{

	setlocale(LC_ALL, "RUSSIAN");
	int a = 100, b = 0, c = 0, d = 2147483647, m = 0, n = 0, x = 2147483646;
	for (int i = 0; a != 0; i++) {
		cin >> a;
		if ((b > c) && (b > a)) {
			d = i - m;
			m = i;
			n++;
		}
		if (d < x) x = d;
		c = b;
		b = a;
	}
	if (n > 1) cout << x;
	else cout << "0";
}