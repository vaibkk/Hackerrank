#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n,count=0,count1=0,min,max;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++)
    {
       cin >> a[i];
    }
    max=a[0];
   for(int i=1;i<n;i++)
   {if(max<a[i])
    {max=a[i];
     count=count+1;
    } 
   }
  min=a[0];
  for(int i=0;i<n;i++)
  {if(min>a[i])
   {min=a[i];
    count1=count1+1;
   }
  }
    cout <<count<<" "<<count1;


    return 0;
}
