#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    pair<int, int> temp;
    typedef pair<int, int> pairs; //creating pair as default data type
    pairs p[3]; //array of pair objects
    for (int i =0; i<3; i++){
         cin>>a>>b;
        //p[i].first= a; //inserting first element of pair
        //p[i].second = b; //inserting first element of pair
        temp=make_pair(a,b);//inserting as a pair
        p[i]=temp;
    }
    set<pairs> s;   //set to sort pair
    set<pairs> :: iterator it; //iterator to manipulate set
    for (int i =0; i<3; i++){
         s.insert(p[i]); //inserting pair object in set
    }
    for (it = s.begin(); it!=s.end(); it++){
         pairs m = *it; // returns pair to m
         cout<<m.first<<" "<<m.second<<endl; //showing pair elements
    }
    return 0;
}
/*
input:
    1 3
    3 1
    2 4
output:
    1 3
    2 4
    3 1
*/
