#include <bits/stdc++.h>
using namespace std;
int main() 
{ int n,r,b,count,temp;
  cin>>n;
  vector<int>a(n);
  for(int i=0;i<n;i++)
    cin>>a[i];
 for(int i=0;i<n;i++)
 { count=0;
   temp=a[i]; 
  while(temp!=0)
  {r=temp%10;
   if(r!=0&&a[i]%r==0)
   { count=count+1;
   }
   temp=temp/10;
  }
  cout<<count<<"\n";
 }
 return 0;
}
