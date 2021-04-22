#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n,count=0,max;
    cin >> n;
    vector<int> ar(n);
    for(int i = 0; i < n; i++)
    {
       cin >> ar[i];
    }
   max=ar[0];
  for(int i=1;i<n;i++)
  {
    if(ar[i]>max)
    max=ar[i];
  }
  for(int i=0;i<n;i++)
   {if(ar[i]==max)
      count=count+1;
   }
    cout << count << endl;
    return 0;
}
