#include <bits/stdc++.h>
using namespace std;
int main() 
{int n,count=0;
    int k,temp;
    cin >> n >> k;
    vector<int> height(n);
    for(int i = 0; i < n; i++)
    {
       cin >> height[i];
    }
    for(int i=0;i<n;i++)
    {for(int j=i+1;j<n;j++)
     {if(height[i]>height[j])
      temp=height[i];
      height[i]=height[j];
      height[j]=temp;
    }
   }
 int a= height[n-1];
   if(a>k)
     cout<<a-k;
   else if(a<k)
     cout<<count;
    return 0;
    
}
