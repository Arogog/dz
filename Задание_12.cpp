#include "pch.h"
#include <iostream>
#include <string>
#include <windows.h>
#include <cmath>

using namespace std;

int main()
{

	setlocale(LC_ALL, "RUSSIAN");
	int a = 100, b = 0, c = 0, d = 1;
	for (int i = 0; a != 0; i++) {
		cin >> a;
		if (b == a) c++;
		else c = 0;
		b = a;
		if (d <= c) d = c + 1;
	}
	cout << d;
}