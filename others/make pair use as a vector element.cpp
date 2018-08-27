#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<pair<int ,int> >moves;
    int x,y;
    for(int i=0;i<3;i++){
        cin>>x>>y;
        moves.push_back(make_pair(x,y));
    }
    sort(moves.begin(),moves.end());///always take first value fr sorting
    for(int i=0;i<moves.size();i++){
        cout<<moves[i].first<<"  "<<moves[i].second<<endl;
    }

    return 0;
}
/*
input:
    1 3
    3 0
    2 4
output:
    1  3
    2  4
    3  0
*/
