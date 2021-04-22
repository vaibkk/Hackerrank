#include <bits/stdc++.h>
using namespace std;
int main() 
{
    long int n,temp, a;
    cin >> n;
    vector<long int> arr(n);
    for(long int i = 0; i < n; i++)
    {
       cin >> arr[i];
    }
    std::sort(arr.begin(),arr.end());
     if((n+1)%2==0)
     { a=(n+1)/2;
       cout<<arr[a-1];
     }
     else
     {a=(n+1)/2;
      cout<<(arr[a-1]+arr[a])/2;
     }
    return 0;
}
