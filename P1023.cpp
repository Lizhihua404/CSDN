#include <iostream>
using namespace std;

int main()
{
	int a, n;
	cin >> a >> n;
	if (0 <= a <= 9 && 2 <= n <= 9)
	{
		int number = a, sum = a;
		for (int i = 1; i < n; i++)
		{
			number = number * 10 + a;
			sum += number;
		}
		cout << sum << endl;
	}
	return 0;
}