#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<char> mp;
    std::set<int>::iterator it;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
       mp.insert(s[i]);
    }
    while (!mp.empty()) {
        std::cout << ' ' << *mp.begin();
        mp.erase(mp.begin());
//    if(mp.size()%2==0) cout<<"CHAT WITH HER!";
//    else cout<<"IGNORE HIM!";
    }
    return 0;
}
