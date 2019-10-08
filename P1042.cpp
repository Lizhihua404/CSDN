#include<iostream>
#include<vector>
#include<array>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int>list;
    for(int x, i=0; i<n; i++)
    {
        cin >> x;
        list.push_back(x);
    }
    
    int i, j, t;
    for(i=0; i<n/2; i++)
    {
        j=n-i-1;
        t=list[i];
        list[i]=list[j];
        list[j]=t;
    }
    for(i=0; i<n; i++)
    {
        cout << list[i] << ' ';
    }
    return 0;
}