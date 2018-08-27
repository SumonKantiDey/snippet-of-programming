///codeforces a winner
#include<bits/stdc++.h>

using namespace std;
map<string,int>mp;
map<string,int>mp1;
string str[1002];
int ara[1002];
int main()
{
   int a, b, c, m = 0, i;
   cin>>a;
   for(i=0; i<a; i++){
      cin>>str[i]>>ara[i];
      mp[str[i]]+=ara[i];
      cout<<mp[str[i]]<<endl;
   }
   for(i=0; i<a; i++){
      m=max(m,mp[str[i]]);
   }
   for(i=0; mp[str[i]]<m||(mp1[str[i]]+=ara[i])<m; i++);

   cout<<str[i]<<endl;

   return 0;

}


