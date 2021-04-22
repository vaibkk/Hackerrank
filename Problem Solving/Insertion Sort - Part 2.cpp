#include <bits/stdc++.h>
using namespace std;
int main() 
{int n;
 cin>>n;
 vector<int>arr(n);
 for(int i = 0; i<n;i++)
   cin>>arr[i];
 for(int i=0 ;i<n ;i++) 
    {
       int temp=arr[i]; 
       int j=i;
          while(j>0&&temp<arr[j-1]) 
         {  arr[j] = arr[j-1];   
            j= j-1;
          }
     arr[j]=temp;
     if(i>=1)
     {
       for(int i=0;i<n;i++)
       cout<<arr[i]<<" ";
       cout<<"\n";
     }
    } 
return 0;
}