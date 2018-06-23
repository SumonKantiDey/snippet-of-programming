//http://codeforces.com/problemset/problem/755/B
#include<bits/stdc++.h>
using namespace std;
vector <string> a,b;

int main()
{
    int n , m;
    string ss;
    cin >> n >> m;
    for(int i = 0; i<n; i++)
    {
        cin >> ss;
        a.push_back(ss);
    }
    for(int i = 0; i<m; i++)
    {
        cin >> ss;
        b.push_back(ss);
    }
    int cnt = 0;
    for(int i = 0 ; i<n; i++)
    {
        if(binary_search(b.begin(),b.end(),a[i])) cnt++;
    }
    n-=cnt;
    m-=cnt;
    if(cnt%2) n++;
    if(n > m)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
