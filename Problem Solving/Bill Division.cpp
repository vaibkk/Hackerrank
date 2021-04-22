#include <bits/stdc++.h>

using namespace std;



int main() {
    int n;
    int k;
    cin >> n >> k;
    vector<int> ar(n);
    for(int i = 0; i < n; i++)
    {
       cin >> ar[i];
    }
    int b,sum=0,ba;
    cin >> b;
    ar[k]=0;
    for(int i=0;i<n;i++)
        sum=sum+ar[i];
   ba=sum/2;
  if(ba==b)
    cout<<"Bon Appetit";
   if(b>ba)
     cout<<b-ba;
  
  
    return 0;
}
