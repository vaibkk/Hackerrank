#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n,a,b;
    cin >> n;
    vector<int>x(n);
    vector<int>y(n);
    vector<int>m(n);
    for(int i=0;i<n;i++)
      cin>>x[i]>>y[i]>>m[i];
   for(int i=0;i<n;i++)
   { a=abs(m[i]-x[i]);
     b=abs(m[i]-y[i]);
     if(a>b)
       cout<<"Cat B"<<"\n";
    if(a==b)
      cout<<"Mouse C"<<"\n";
    if(a<b)
      cout<<"Cat A"<<"\n";
   }
    return 0;
}
