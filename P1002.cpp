#include <iostream>
using namespace std;

int main()
{
	int a, b, c, s, v;
	cin >> a >> b >> c;
	s = 2 * a * b + 2 * b * c + 2 * a * c;
	v = a * b * c;
	cout << v << ' ' << s;
}