#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	double r, h, x, y, l, h1;
	cin >> r >> h >> x >> y;
	l = sqrt(x * x + y * y);
	if ((l - r) >= 0)
	{
		h1 = 0;
	}
	else
	{
		h1 = (h * (r - l)) / r;
	}
	cout << fixed << setprecision(5) << h1;
	return 0;
}

