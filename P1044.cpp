#include<iostream>
#include<vector>
#include<array>
#include<cmath>
using namespace std;

int main()
{
    int n, target_number;
    cin >> n >> target_number;
    vector<int>list;
    for(int x, i=0; i<n; i++)
    {
        cin >> x;
        list.push_back(x);
    }
    
    int mid, a=1, b=n;
    for(int i=0; pow(2,i)<n; i++)
    {
        mid=(a+b)/2;
        if(list[mid-1] < target_number)
        {
            a=mid+1;
        }
        else if(list[mid-1] > target_number)
        {
            b=mid-1;
        }
        else
        {
            cout << "yes, the number " << target_number 
                   << " is in index of " << mid << '.'; break;
        }
    }
    return 0;
}