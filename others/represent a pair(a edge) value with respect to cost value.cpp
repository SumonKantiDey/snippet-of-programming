#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pi;
#define edge pair< int, int >
#define MAX 1001

// ( cost (u, v) ) format
vector< pair< int, edge > > p;
int main()
{
    int n,u,e,v,cost;
    cin>>n>>e;
    for(int i=0 ;i<e; i++){
        cin>>u>>v>>cost;
        p.push_back(pair< int, edge >(cost, edge(u, v)));
    }
    //sort(p.begin(),p.end());
    for(int i=0 ;i<e; i++){
        cout<<"cost "<<p[i].first<<"  edges ("<<p[i].second.first<<" , "
        <<p[i].second.second<<")"<<endl;
    }
    return 0;
}
/**
input output
8 11
1 2 4
1 5 2
1 4 10
2 4 8
2 3 18
3 4 11
4 5 5
4 7 11
4 8 9
6 7 1
6 8 2
cost 4  edges (1 , 2)
cost 2  edges (1 , 5)
cost 10  edges (1 , 4)
cost 8  edges (2 , 4)
cost 18  edges (2 , 3)
cost 11  edges (3 , 4)
cost 5  edges (4 , 5)
cost 11  edges (4 , 7)
cost 9  edges (4 , 8)
cost 1  edges (6 , 7)
cost 2  edges (6 , 8)
**/
