#include<iostream>
#include<vector>
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
    int number;
    cin >> number;
    list.push_back(number);
    
    int i, j, t;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n+1;j++)
        {
            if(list[i]>list[j]) 
            {
                t=list[j];
                list[j]=list[i];
                list[i]=t;
                
            }
        }
    }
    for(int q=0;q<n+1;q++)
    {
        cout << list[q] << ' ';
    }
    return 0;
}