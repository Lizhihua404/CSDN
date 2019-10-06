#include <iostream>
#include <vector>
#include <array>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> number;
	number.resize(n);
	for (double x, i = 1; i <= n; i++)
	{
		cin >> x;
		number.push_back(x);
	}
	double max = number[0];
	int val;
	for (int i = 1; i <= n; i++)
	{
		if (number[i] > max)
		{
			max = number[i];
			val = i + 1;
			cout << max << ' ' << val;
		}
	}
	cout << max << ' ' << val;
	return 0;
}