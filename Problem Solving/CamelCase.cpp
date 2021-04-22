#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int main() 
{string str;cin>>str;int count=0;
 for(int i=0;i<=str.size();i++)
 {  char c=str[i];
    if(isupper(c))
    count=count+1;
 }

 cout<<count+1;
 return 0;
}
