#include <iostream>

using namespace std;

int main()
{
	int a;
	cin >> a;
	if ((a / 1000 == a % 10) && ((a / 100) % 10 == (a / 10) % 10)) { cout << 1; }
	else { cout << 42; };
	cin.get();
	cin.get();
}