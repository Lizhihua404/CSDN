#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    vector<vector<int>> yanghui;
    yanghui.resize(n);
    for (int i = 0; i < n; ++i)
    {
        yanghui[i].resize(n);
    }
    
    int i, j;
    yanghui[0][0] = 1;
    for( i = 1; i < n; i++)
    {
        yanghui[i][0] = 1;
        for(j = 1; j < n-1; j++)
        {
            yanghui[i][j] = yanghui[i-1][j-1] + yanghui[i-1][j];
        }
        yanghui[i][i] = 1;
    }
    
    for(i = 0; i <= n; i++)
    {
        for(j = 0; j <= i; j++)
        {
            cout << yanghui[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}