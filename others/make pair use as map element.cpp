#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int>first,second;
    map<pair<int,int >,int >skd;
    long long tt,x,y,ans=0;
    cin>>tt;
    while(tt--){
        cin>>x>>y;
        ans+=first[x]; first[x]++;
        ans+=second[y];second[y]++;
        ans-=skd[make_pair(x,y)]; skd[make_pair(x,y)]++;
    }
    cout<<ans<<endl;
    return 0;
}
//code forces prob name C. Watchmen
