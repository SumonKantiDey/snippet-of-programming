//http://codeforces.com/contest/722/problem/B
#include<bits/stdc++.h>
using namespace std;
int ara[101];
int main()
{
    string b;
   // char c[100000];
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>ara[i];
    }
    int test=0,cnt=0;
    cin.ignore();//For string buffer
    for(int i=0; i<t; i++)
    {
        getline(cin,b);//Take a sentence with white space
       // cout<<b<<endl;
        for(int j=0; b[j]; j++){
            if(b[j] == 'a' || b[j] == 'e'||b[j] == 'i' ||b[j] == 'o' ||b[j] == 'u'||b[j] == 'y')cnt++;
        }
        if(cnt == ara[i]) {
            test++;
            cnt=0;
        }
    }
    if(test ==t){
        cout<<"YES"<<endl;
        return 0;
    }
    cout<<"NO"<<endl;
    return 0;
}
