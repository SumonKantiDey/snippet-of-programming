#include<bits/stdc++.h>
using namespace std;
int main()
{
    set< char >s1,s2;
    int a,b;
    char c;
    cin>>a;
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            cin>>c;
            if(i==j||j==a-i-1)s1.insert(c);
            else s2.insert(c);
        }
    }
    if(s1!=s2&&s1.size()==1&&s2.size()==1)cout<<"YES";
    else cout<<"NO";
    return 0;
}
