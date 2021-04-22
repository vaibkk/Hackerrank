#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;
int main() {
    float n,p=0,m=0,z=0;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0;i < n; i++)
    {
       cin >> arr[i];
    }
    for(int i=0;i<n;i++)
    {if(arr[i]>0)
      p=p+1;
     else if(arr[i]<0)
       m=m+1;
     else if(arr[i]==0)
      z=z+1;
    }
   cout<<fixed<<setprecision(n)<<p/n<<"\n";
   cout<<fixed<<setprecision(n)<<m/n<<"\n";
   cout<<fixed<<setprecision(n)<<z/n;
    return 0;

}