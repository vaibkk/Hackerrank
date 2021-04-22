#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,height;
    cin >> t;
    vector<int>a(t);
    for(int i = 0; i < t; i++)
    cin>>a[i];
   for(int i=0;i<t;i++)
    { height=0;
      for(int j=0;j<=a[i];j++)
      { if(j%2==0)
          height=height+1;
        if(j%2!=0)
          height=height*2;
      }
      cout<<height<<"\n";
    }
 return 0;
}
