#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> grades(n);
    vector<int>c(n);
    for(int i = 0;i < n; i++)
    {
       cin >> grades[i];
        
    }
    for(int i=0;i<n;i++)
    {c[i]=grades[i]%5;
     if(c[i]==3 && grades[i]>37)
       grades[i]=grades[i]+2;
     if(c[i]==4 && grades[i]>37)
        grades[i]=grades[i]+1;
    }
    for(int i=0;i<n;i++)
    cout <<grades[i]<< endl;
    

    return 0;
}
