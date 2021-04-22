#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin >> t;
    for(int a = 0; a < t; a++)
    {   int sum ,i,j;
        int m;
        cin >> m;
        int n;
        cin >> n;
        vector<int> arr(n);
        for( i = 0; i < n; i++)
        {
           cin >> arr[i];
        }
        for( i=0;i<n;i++)
        {
          for( j=i+1;j<n;j++)
          { sum=arr[i]+arr[j];
            if(sum==m)
           cout<<i+1<<" "<<j+1<<"\n";
          }
        }  
    }
   return 0;
}
