//nomally set a  value insert korar por value print kora
#include<bits/stdc++.h>
using namespace std;
int main()
{

    set<int>s;
    set<int>::iterator it;
    int b,k;
    cin>>b;
    while(b--){
        cin>>k;
        s.insert(k);
    }
    cout<<"size=="<<s.size()<<endl;
    for (it=s.begin(); it!=s.end(); ++it){
         cout<< *it<<" ";//Print the value by this iterator
    }
}
/*
input:
5
7 1 7 2 1 1
output:
size==3
1 2 7
*/
