//prob http://codeforces.com/contest/697/problem/B
#include<bits/stdc++.h>
using namespace std;
int main()
{

    string s;
    int i,j;
    cin>>s;
    for(i=s.size()-1; i>0; i--){
        if(s[i] == 'e')break;
    }
    int k=0;
    for(j=i+1; j<s.size(); j++){
       k = k*10 + (s[j] - '0');
    }
    s.erase(i);
    cout<<s[0];

    if(s.size() - 2 > k){
       s.erase(0,2);
       cout<<s.substr(0,k);
       s.erase(0,k);
       if(s!="0")cout<<'.'<<s;
     }
     else{
         s.erase(0,2);
         int temp = k - s.size();
         s += string(temp,'0');
         if(s!="0")cout<<s;
     }
return 0;
}
