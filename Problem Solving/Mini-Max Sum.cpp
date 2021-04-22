#include <bits/stdc++.h>
using namespace std;
int main() 
{
  long a[5],temp,min=0,max=0;
  for(int i=0;i<5;i++)
    cin>>a[i];
  for(int i=0;i<5;i++)
  {for(int j=i+1;j<5;j++)
   if(a[i]>a[j])
   { temp=a[i];
    a[i]=a[j];
    a[j]=temp;
   } 
  }
  for(int i=0;i<4;i++)
    min=min+a[i];
  for(int i=4;i>0;i--)
    max=max+a[i];
  cout<<min<<" "<<max;
   
  
}