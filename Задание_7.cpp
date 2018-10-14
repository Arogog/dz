#include <iostream> 

using namespace std;
int main()
{
	int h, a, b, day = 0, k = 0;
	cin >> h;
	cin >> a;
	cin >> b;
	do
	{   k = k + a;
		if (k >= h)
		{day++;
		break;}
		else
		{k = k - b;
		day++;}
	}   
	while (k <= h);
	cout << day;
	cin.get();
	cin.get();
}