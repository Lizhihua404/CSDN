#include<iostream>
#include<vector>
#include<array>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int>list_n;
    vector<int>list_m;
    for(int x, i=0; i<n; i++)
    {
        cin >> x;
        list_n.push_back(x);
    }
    
    for(int y, j=0; j<m; j++)
    {
        cin >> y;
        list_m.push_back(y);
    }
    
    for(int i=0; i<m; i++)
    {
        list_n.push_back(list_m[i]);
    }
    
    int i, j, t;
    for(i=0;i<n+m - 1;i++)
    {
        for(j=i+1;j<n+m;j++)
        {
            if(list_n[i]>list_n[j]) 
            {
                t=list_n[j];
                list_n[j]=list_n[i];
                list_n[i]=t;
                
            }
        }
    }
    for(int q=0;q<n+m;q++)
    {
        cout << list_n[q] << ' ';
    }
    return 0;
}