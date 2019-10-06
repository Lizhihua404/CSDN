#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float x, y, z, s, c, p;
	cin >> x >> y >> z;
	c = x + y + z;
	p = (x + y + z) / 2;
	s = sqrt(p * (p - x) * (p - y) * (p - z));

	cout << s << ' ' << c;
	return 0;
}