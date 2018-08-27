#include<bits/stdc++.h>
using namespace std;
set<int>s[4];
int main()
{
  int n,u,v;
  cin >> n;
  for(int i = 0; i< n; i++)
  {
      cin >> u >> v;
      s[u].insert(v);
  }
  int x = *s[3].begin();
  cout <<"Indicating the First edge of three is :  "<<  x <<endl;
  cout <<"size = "<< s[3].size() <<endl;
  for(auto it = s[3].begin(); it != s[3].end(); it++)
  {
      cout <<"value is = "<< *it <<endl;
  }
  return 0;
}
/*
4
1 4
2 7
3 12
3 9
*/
