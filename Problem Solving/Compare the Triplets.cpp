#include <bits/stdc++.h>
using namespace std;

int main() 
{int a[3],b[3];
 int c=0,d=0;
 for(int i=0;i<3;i++)
  cin>>a[i];
  for(int i=0;i<3;i++)
    cin>>b[i];
 for(int i=0;i<3;i++)
 {if(a[i]>b[i])
     c=c+1;
   if(a[i]<b[i])
     d=d+1;
   else
   {c=c+0;
    d=d+0;}
 }
    cout <<c<<" "<<d <<endl;
    

    return 0;
}
