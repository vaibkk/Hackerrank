#include <bits/stdc++.h>
using namespace std;
int main() {
     int n;
     cin >> n;int a[100][100];
    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < n;j++)
        {
          cin >> a[i][j];
        }
    }
    int result=0,prim=0,sec=0;
   for(int i=0;i<n;i++)
   { for(int j=0;j<n;j++)
    {if(i==j)
      prim=prim+a[i][j];
    }
   }
  for(int i=0;i<n;i++)
  {for(int j=0;j<n;j++)
   {if(i+j==n-1)
    sec=sec+a[i][j];
   }
  }
  result=prim-sec; 
  if(result<0)
    result=result*(-1);
  cout << result << endl;
    return 0;
}
