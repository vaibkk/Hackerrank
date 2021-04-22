#include <bits/stdc++.h>
using namespace std;
int main() 
{   int i=100;
    int x1;
    int v1;
    int x2;
    int v2;
    int a,b;
   cin >> x1 >> v1 >> x2 >> v2;
   for(int i=1;i<10000;i++)
   { a=x1 +(v1*i);
     b=x2 +(v2*i);
     if(a==b)
      {  cout<<"YES";
         break;
      }
     
     }
  if(a!=b)
   cout<<"NO";
    return 0;
}
