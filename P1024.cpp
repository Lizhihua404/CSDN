#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	if (n >= 5 && n <= 11)
	{
		int number = 1, sum = 0;
		for (int i = 1; i <= n; i++)
		{
			number *= i;
			sum += number;
		}
		cout << sum;
	}
	return 0;
}