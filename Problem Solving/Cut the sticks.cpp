#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n,count,small;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++)
    {
       cin >> arr[i];
    }
    while(small>0)
    { count=0;
      small=INT_MAX;
      for(int j=0;j<n;j++)
      {if(small>arr[j]&&arr[j]>0)
        small=arr[j]; 
      }
      for(int k=0;k<n;k++)
      {if(arr[k]>0)
       {arr[k]=arr[k]-small;
          count=count+1;
       }
      }
     if(count==0)
       break;
     cout<<count<<"\n";
    }


    return 0;
}
