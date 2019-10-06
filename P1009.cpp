#include <iostream>
using namespace std;
int main()
{
	int grade, n;
	cin >> grade;
	n = grade / 10;
	switch (n)
	{
	case 9:cout << "A\n"; break;
	case 8:cout << "B\n"; break;
	case 7:cout << "C\n"; break;
	case 6:cout << "D\n"; break;
	default:cout << "E\n"; break;
	}
	return 0;
}