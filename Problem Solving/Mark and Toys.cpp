#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,temp;
    int k;
    cin >> n >> k;
    vector<int> prices(n);
    for(int i = 0;i < n; i++)
    {
       cin >> prices[i];
    }
  std::sort(prices.begin(),prices.end());
  int sum=0,count=0;
  for(int i=0;i<n;i++)
  {if(sum<=k)
    {sum=sum+prices[i];
     count=count+1;
    }
  }
  cout<<count-1;
    return 0;
}
