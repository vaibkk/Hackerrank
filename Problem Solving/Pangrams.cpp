#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
  string arr;
	getline( cin,arr);
	int alphabetTab = 0;
	int alphabet[26];
	int flag = 0;
	for(int i = 0; i < 26; i++)
  {
		alphabet[i] = 0;
	}
	for(int i = 0;i<arr.length(); i++)
  {
		int insertNum = (tolower(arr[i])-'a');
		if(insertNum<0||insertNum>25)
    {
			continue;
		}
		if(alphabet[insertNum]==0)
    {
			alphabetTab++;
		}
		if(alphabetTab>=26)
    {
			flag = 1;
			break;
		} 
    else 
    {
			alphabet[insertNum]++;
		}
	}
	if(flag)
		cout<<"pangram";
  else 
		cout<<"not pangram";
return 0;
}  
