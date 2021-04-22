#include <bits/stdc++.h>
#include<math.h>
using namespace std;
int main() 
{
    int n;
    cin >> n;long result=0;
    long ar[10];
    for(int i = 0; i < n; i++)
     {   cin >> ar[i];
         
     } 
      for(int i=0;i<n;i++)
      {  result=result+ar[i];}
    
    cout << result << endl;
    return 0;
}