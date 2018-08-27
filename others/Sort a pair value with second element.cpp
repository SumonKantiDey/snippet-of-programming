//ref https://www.quora.com/How-do-I-sort-array-of-pair-int-int-in-C++-according-to-the-first-and-the-second-element
#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int> >v,v1;
bool compare(const pair<int,int>p1,const pair<int,int>p2)
{
    return p1.second > p2.second;
}
int main()
{
    int n,m,a,b;
    for(int i=1; i<=5; i++){
        cin>>a>>b;
        v.push_back(make_pair(a,b));
        v1.push_back(make_pair(a,b));
    }
    cout<<"Normal vector pair sort :\n"<<endl;
    sort(v1.begin(),v1.end());//sort with first element increasing order
    for(int i=0; i<v1.size(); i++){
        cout<<v1[i].first<<" "<<v1[i].second<<endl;
    }
    cout<<endl;
    cout<<"vector pair sort via second element decreasing order :\n"<<endl;
    sort(v.begin(),v.end(),compare);///sort by second element decreasing order
    for(int i=0; i<v.size(); i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    return 0;
}
/**
output:
7 15
5 17
8 25
6 32
12 27
Normal vector pair sort :

5 17
6 32
7 15
8 25
12 27

vector pair sort via second element decreasing order :

6 32
12 27
8 25
5 17
7 15
**/

