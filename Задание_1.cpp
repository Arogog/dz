//#include "pch.h"
#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	int V, t;
	cin >> V >> t;
	if (V < 0) { cout << 109 + (V * t) % 109; }
	else { cout << (V * t) % 109;  }
	cin.get();
	cin.get();
}