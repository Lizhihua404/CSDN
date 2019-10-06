#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int m1 = 1, m2, m3, n1 = 2, n2, n3;
	double k1, k2, k3;
	k1 = n1 * 1.0 / m1;
	n2 = n1 + m1;
	m2 = n1;
	k2 = n2 * 1.0 / m2;
	double sum = k1 + k2;
	if (n >= 5 && n <= 50)
	{
		for (int i = 3; i <= n; i++)
		{
			n3 = n1 + n2;
			m3 = n2;
			k3 = n3 * 1.0 / m3;
			sum += k3;
		}
	}
	cout << fixed << setprecision(5) << sum;
	return 0;
}