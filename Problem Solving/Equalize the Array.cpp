#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() 
{
    int i,j,n;
  cin>>n;
  vector<int>a(n);
  vector<int>tempcount(n);
int temp=0,count=1;
    for(i=0;i<n;i++)
    cin>>a[i];
        for (i=0;i<n;i++)
    {
        tempcount[i]=0;
        temp=a[i];
            for(j=i+1;j<n;j++)
           {
            if(a[j]==temp)
              {
                tempcount[i]++;
                if(tempcount[i]>count)
                {
                    count=tempcount[i];
                }
            }
        }
    }
if(count>1)
cout<<n-count-1;
  int diff;
if(count==1)
{ diff=n-1;
 cout<<diff;
}
  
return 0;
}
