#include <iostream>
#include <vector>
#include <array>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> a;
	a.push_back(0);
	a.push_back(1);
	a.push_back(1);
	if (n <= 3)
	{
		for (int i = 0; i < n; i++)
		{
			cout << a[i] << ',';
		}
	}
	else
	{
		cout << a[0] << ',' << a[1] << ' ' << a[2];
		for (int x, i = 3; i < n; i++)
		{
			x = a[i - 3] + a[i - 2] + a[i - 1];
			a.push_back(x);
			cout << ',' << a[i];
		}
	}
	return 0;
}