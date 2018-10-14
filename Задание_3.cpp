//https://www.cs.cmu.edu/~pattis/15-1XX/common/handouts/ascii.html
#include <iostream>
using namespace std;
int main()

{
	int i;
	cout << "+---+-------+-------+-------+"<<endl;
	for (i = 32; i < 128; i++) {
		cout << "|" << i << "    " << char(i)<<"      "<< hex << i <<"      "<< oct << i << endl;
		cout << "+---+-------+-------+-------+"<<endl;
	};

	cin.get();
	cin.get();
}