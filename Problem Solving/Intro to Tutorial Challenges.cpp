#include <bits/stdc++.h>
using namespace std;
int main() {
    int V;
    cin >> V;
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++)
    {
       cin >> arr[i];
    }
    for(int i=0;i<n;i++)
    {if(arr[i]==V)
     cout<<i;}
    return 0;
}
