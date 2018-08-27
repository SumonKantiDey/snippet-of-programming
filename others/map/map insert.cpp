#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<char,int> mp;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        mp[s[i]]=1;
    }
    for(int i=0;i<mp.size();i++){
        cout<<mp[i]<<endl;
    }
    //if(mp.size()%2==0) cout<<"CHAT WITH HER!";
    //else cout<<"IGNORE HIM!";

}



