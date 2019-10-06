#include <iostream>
using namespace std;

int main()
{
	int a[500][500];
	int m, n, sum = 0;
	cin >> m >> n;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> a[i][j];
		}
	}

	for (int j = 0; j < n; j++)
	{
		int sum = 0;
		for (int i = 0; i < m; i++)
		{
			sum += a[i][j];
		}
		cout << sum << ' ';
	}
	return 0;
}