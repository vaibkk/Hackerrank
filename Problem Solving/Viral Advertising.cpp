#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n,dislike,result=5,sum=0;
    cin >> n;
    vector<int>like(n);
    int i=1;
    while(i<=n)
    {like[i]=result/2;
     dislike=result-result/2;
     result=3*like[i];
     i++;
    }
    for(int i=1;i<=n;i++)
    {sum=sum+like[i];
    }
    cout <<sum << endl;
    return 0;
}
