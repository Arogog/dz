//http://www.cyberforum.ru/cpp-beginners/thread178251.html
#include <iostream>
using namespace std;
int main()
{
	cout << "char";
	if (sizeof(char) <= sizeof(short)) cout << "->short";
	if (sizeof(short) <= sizeof(int)) cout << "->int";
	if (sizeof(int) <= sizeof(long)) cout << "->long\n";

	cout << "float";
	if (sizeof(float) <= sizeof(double)) cout << "->double";
	if (sizeof(double) <= sizeof(long double)) cout << "->long double\n";

	cout << "bool";
	if (sizeof(bool) <= sizeof(int)) cout << "->int";
	if (sizeof(int) <= sizeof(long)) cout << "->long\n";
	cin.get();
	cin.get();
}