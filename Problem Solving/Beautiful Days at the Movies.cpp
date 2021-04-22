#include <bits/stdc++.h>
using namespace std;
int main() 
{   int n1,n2,k,count=0;
	cin>>n1>>n2>>k;
  for(int i=n1;i<=n2;i++)
  {  int t=i,r,rev=0;
	 while(t>0)
	 {
		r=t%10;
		t=t/10;
		rev=rev*10+r;
	 }
   int diff=abs(i-rev);
   if(diff%k==0)
   {
     count=count+1;
   }
  }
	cout<<count;
  return 0;
}


  