#include <iostream>
using namespace std;

int main()
{
	int apple_height[10];
	for (int i = 0; i < 10; i++)
	{
		cin >> apple_height[i];
	}
	int taotao_height;
	cin >> taotao_height;
	int n = 0;
	for (int i = 0; i <= 9; i++)
	{
		if (apple_height[i] <= (taotao_height + 30))
			n++;
	}
	cout << n << endl;
	return 0;
}