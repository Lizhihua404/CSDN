#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	int a, b, c;
	float t, x1, x2;
	cin >> a >> b >> c;
	t = sqrt(b*b - 4*a*c);
	cout << fixed << setprecision(5);
	if (t >= 0)
	{
		x1 = (-b - t) / (2 * a);
		x2 = (-b + t) / (2 * a);
		cout << "x1=" << x1 << ' ' << "x2=" << x2;
	}
	else
		cout << "No solution.";
	return 0;
}