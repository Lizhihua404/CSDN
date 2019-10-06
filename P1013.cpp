#include <iostream>
using namespace std;

int main()
{
	double x, money;
	cin >> x;
	if (x <= 50)
	{
		money = 0.5 * x;
	}
	else if (x <= 100)
	{
		money = 25 + (x - 50) * 0.7;
	}
	else
	{
		money = 60 + (x - 100);
	}
	cout << money;
	return 0;
}