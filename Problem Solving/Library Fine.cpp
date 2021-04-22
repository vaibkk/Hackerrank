#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int d1,m1,y1,fine;
    cin >> d1 >> m1 >> y1;
    int d2,m2,y2;
    cin >> d2 >> m2 >> y2;
    if(d2>=d1&&m1==m2&&y1==y2)
    {fine=0;
    }
    if(y1<y2)
    fine=0;  
    if(m1==m2&&d2<d1&&y1==y2)
    {fine=abs(d2-d1)*15;
    }
    if(y1==y2&&m1!=m2)
    {fine=abs(m1-m2)*500; 
    }
    if(y1>y2)
    {fine=10000;
    }
    if(m1<m2&&y1==y2)
    fine=0;
    cout<<fine;
    return 0;
}
