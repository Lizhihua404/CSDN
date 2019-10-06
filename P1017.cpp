#include <iostream>
using namespace std;

int main()
{
	int year, month, Feb_day;
	cin >> year >> month;
	((year % 4 == 0 && (year%100) != 0) || year % 400 == 0) ? Feb_day = 29 : Feb_day = 28;
	switch (month)
	{
		case 1: cout << 31; break;
		case 2: cout << Feb_day; break;
		case 3: cout << 31; break;
		case 4: cout << 30; break;
		case 5: cout << 31; break;
		case 6: cout << 30; break;
		case 7: cout << 31; break;
		case 8: cout << 31; break;
		case 9: cout << 30; break;
		case 10: cout << 31; break;
		case 11: cout << 30; break;
		case 12: cout << 31; break;
	}
	return 0;
}