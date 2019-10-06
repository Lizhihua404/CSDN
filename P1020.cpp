#include <iostream>
using namespace std;
int main()
{
	int n, i = 0;
	double sum = 0;
	cin >> n;
	while (sum<=n)
	{
		i++;
		sum += 1.0 / i;
	}
	cout << i << endl;
	return 0;
}