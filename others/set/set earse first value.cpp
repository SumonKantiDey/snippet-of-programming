// http://codeforces.com/contest/639/problem/A
#include<bits/stdc++.h>
using namespace std;
#define ll long long
set<ll>s;
ll mn = 1e9+5;
ll ara[250009];
int main()
{
    ll n , k, q, type, num,cnt=0,m;
    cin>>n>>k>>q;
    for(int i = 1; i<=n; i++) {
           cin>>ara[i];
    }

    for(int i = 1; i<=q; i++)
    {
        cin>>type>>m;

        if(type == 1)
        {
            s.insert(ara[m]);
            if(s.size() > k)
            {
               s.erase(s.begin());
            }

        }
        else{

            if(s.find(ara[m]) != s.end())
            {
                cout<<"YES"<<endl;
            }
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}
