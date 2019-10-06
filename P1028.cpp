#include <iostream>
using namespace std;

int main()
{
	for (int i = 100; i < 1000; i++)
	{
		int a, b, c;
		a = i / 100;
		b = i % 100 / 10;
		c = i % 100 % 10;
		int n = a * a * a + b * b * b + c * c * c;
		if (i == n)
		{
			cout << i << endl;
		}
	}
}