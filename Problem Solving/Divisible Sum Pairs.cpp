#include <bits/stdc++.h>

using namespace std;



int main() {
    int n;
    int k,sum;
    int c=0;
    cin >> n >> k;
    vector<int> ar(n);
    for(int i = 0; i < n; i++)
    {
       cin >> ar[i];
    }
    for(int i=0;i<n;i++)
     {for(int j=i+1;j<n;j++)
      {sum=ar[i]+ar[j];
       if(sum%k==0)
       c=c+1; 
      }
     }
    cout << c << endl;
    return 0;
}
