#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{int n,temp;cin>>n;
 vector<int>a(n);
 for(int i=0;i<n;i++)
   cin>>a[i];
 for(int i=0;i<n;i++)
 {for(int j=i+1;j<n;j++)
  { if(a[i]>a[j])
   {   temp=a[i];
       a[i]=a[j];
       a[j]=temp;
   }
  }
 }
 for(int i=0;i<n;i++)
   cout<<a[i]<<" ";
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
