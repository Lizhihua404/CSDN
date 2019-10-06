#include <iostream>
using namespace std;
int main()
{
	int a, b, n;
	cin >> a >> b;
	n = a % b;
	while (n)
	{
		a = b;
		b = n;
		n = a % b;
	}
	cout << b;
	return 0;
}