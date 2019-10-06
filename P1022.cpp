#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int line = 1; line <=n; line++)
	{
		for (int i=n-line+1; i > 0; i--)
		{
			cout << "*";
		}
		cout << "\n";
	}
	return 0;
}