#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int m, n;
	cin >> m >> n;
	vector<vector<int>> a;
	a.resize(m * n);
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			int x;
			cin >> x;
			a[i].push_back(x);
		}
	}
	for (int j = 0, sum = 0; j < n; j++)
	{
		for (int i = m,q = j; i >= 0 && q>=0; i--, q--)
		{
			sum += a[i][q];
		}
		cout << sum << ' ';
	}
	return 0;
}