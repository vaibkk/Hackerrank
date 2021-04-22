#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t>0)
    {   int count=0;
        int n;
        int k;
        cin >> n >> k;
        vector<int> a(n);
        for(int i = 0; i < n; i++)
        {
           cin >> a[i];
        }
        for(int i=0;i<n;i++)
        {if(a[i]<=0)
          count=count+1;
        }
     if(count>=k)
       cout<<"NO"<<"\n";
     if(count<k)
       cout<<"YES"<<"\n";
     t--;
    }
    return 0;
}
