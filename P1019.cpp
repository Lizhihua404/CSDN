#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n, i=2;
	cin >> n;
	for (;i <= sqrt(n);i++)
	{
		if (n % i == 0)
		{
			cout << "No."; break;
		}
	}
	if (i > sqrt(n))
	{
		cout << "Yes.";
	}
	return 0;
}