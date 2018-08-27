//codeforces A - Lala Land and Apple Trees
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<pair<int ,int> >left,right;
    int x,y,n,sum=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        if(x<0)left.push_back(make_pair(-x,y));//large to small sorting
        else right.push_back(make_pair(x,y));//small to large sorting
    }
    sort(left.begin(),left.end());
    sort(right.begin(),right.end());
    //cout<<"left=="<<left.size()<<"  right==="<<right.size()<<endl;
    /*for(int i=0;i<left.size();i++){
        cout<<left[i].first<<"  "<<left[i].second<<endl;
     }
     for(int i=0;i<right.size();i++){
         cout<<right[i].first<<"  "<<right[i].second<<endl;
     }*/
    if(left.size() == right.size()){
       for(int i=0; i<left.size(); i++){
           sum+=(left[i].second +right[i].second);
       }
    }
    else  if(left.size() > right.size()){
        for(int i=0; i<right.size(); i++){
            sum+=(left[i].second +right[i].second);
        }
        sum+=left[right.size()].second;
    }
    else{
        for(int i=0; i<left.size(); i++){
            sum+=(left[i].second +right[i].second);
        }
        sum+=right[left.size()].second;
    }
    cout<<sum<<endl;
    return 0;
}
/*
input :
    3
    1 4
    2 5
    -3 5
*/
