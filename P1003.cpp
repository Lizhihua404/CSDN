#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int a, h;
	float s;
	cin >> a >> h;
	s = a * h * 1.0 / 2;
	cout << setiosflags(ios::fixed)
		<< setprecision(5)
		<< s << endl;
	return 0;
}