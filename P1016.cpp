#include <iostream>
using namespace std;

int main()
{
	double x, y;
	cin >> x;
	(1 <= x <= 10) ? y = x + 2 : y = x - 1;
	cout << y;
	return 0;
}