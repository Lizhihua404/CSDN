#include <iostream>
using namespace std;

int main()
{
	double a, b, c, t, max;
	cin >> a >> b >> c;
	a > b ? t = a : t = b;
	c > t ? max = c : max = t;
	cout << max;
	return 0;
}