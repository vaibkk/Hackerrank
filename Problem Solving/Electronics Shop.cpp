#include <bits/stdc++.h>
using namespace std;
int main() 
{
    float s;
    float n;
    float m;float big=1;
    cin >> s >> n >> m;
    vector<float> keyboards(n);
    vector<vector<float> >max(n, vector<float>(m));
    for(int i = 0; i < n; i++)
    {
       cin >> keyboards[i];
    }
    vector<float> drives(m);
    for(float i = 0; i < m; i++)
    {
       cin >> drives[i];
    }
  for(float i=0;i<n;i++)
  {for(float j=0;j<m;j++)
   {
    max[i][j]=keyboards[i]+drives[j];
   } 
  }
  for(float i=0;i<n;i++)
  {for(float j=0;j<m;j++)
    {
     if((max[i][j]>big)&&(max[i][j]<=s))
     big=max[i][j];
    }
  }
  if(big==1)
   big=-1;
  cout<<big;      
    
  
    return 0;
}
