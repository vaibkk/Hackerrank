#include <bits/stdc++.h>
using namespace std;
int main() 
{int n,ar[1005],mn =1000;
    bool flag = false;
    cin >> n;
    for(int i = 0; i < n; i++)
      cin >> ar[i];
    for(int i = 0; i < n; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(ar[i] == ar[j])
            {
                if(abs(i-j) < mn)
                  mn = abs(i-j);
                flag = true;
                break;
            }
        }
    }
    if(!flag)
      mn = -1;
    cout << mn << endl;
    return 0;
}
