#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
     int ar[102],n,fre[102] = { },pairs = 0;
    cin >> n;
    for(int i = 0; i < n; i++) 
    {
        cin >> ar[i];
       fre[ar[i]]++;
        
    }
    for(int i = 0; i < 101; i++)
    {pairs=pairs+fre[i]/2;
       
    }
    cout << pairs << endl;
    return 0;
}
