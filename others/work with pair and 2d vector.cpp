#include<bits/stdc++.h>
using namespace std;
vector<pair<int,string> >vc[1000005];
int main()
{
    int a,num,m;
    string str;
    cin>>a;
    for(int i=0; i<a; i++){
        cin>>num>>str>>m;
        vc[m].push_back(make_pair(num,str));
    }
    cout<<endl;
    for(int j=1; j<=2; j++){
        for(int i=0; i<a/2; i++){
            cout<<vc[j][i].first<<"("<<j<<"  "<<i<<")"<<"   "<<vc[j][i].second<<"("<<j<<"  "<<i<<")"<<endl;
        }
        cout<<endl<<endl;
    }
    cout<<"sort array print :   "<<endl<<endl;
    for(int i=0; i<a; i++){
        sort(vc[i].begin(),vc[i].end());
    }
    for(int j=1; j<=2; j++){
        for(int i=0; i<a/2; i++){
            cout<<vc[j][i].first<<"("<<j<<"  "<<i<<")"<<"   "<<vc[j][i].second<<"("<<j<<"  "<<i<<")"<<endl;
        }
        cout<<endl;
        cout<<"finished "<<j<<"th index"<<endl;
        cout<<endl<<endl;
    }
    return 0;
}
