#include<bits/stdc++.h>
using namespace std;
struct town{
   int dis;
   int people;
};
bool cmp(town A,town B)
{
    if(A.dis<B.dis)return 1;//dis smaller to larger akare sort hobe means acending order
    return 0;
}
int main()
{
    vector<town>v;
    int x,y,z,ans,t;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>x>>y>>t;
        town temp;
        ans = (x*x + y*y);//(x^2 + y^2)
        temp.dis = ans;
        temp.people = t;
        v.push_back(temp);
   }
   sort(v.begin(),v.end(),cmp);
   for(int i=0; i<n; i++){
       cout<<v[i].dis<<"   "<<v[i].people<<endl;
   }
   return 0;
}
/**
intput:
4
5 5 6
5 5 9
2 3 5
7 8 3

output:
13   5
50   6
50   9
113   3
**/
