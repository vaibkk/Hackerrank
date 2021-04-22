#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,result=0;
    cin >> n;
    vector<int> ar(n);
    for(int i = 0; i < n; i++){
       cin >> ar[i];
    }
    for(int i=0;i<n;i++)
    {result=result+ar[i];}
    cout << result << endl;
    return 0;
}
