#include<bits/stdc++.h>
using namespace std;
int ara[10];
struct sorta{
int x;
int y;
};
bool cmp(sorta m,sorta n){
    if(m.x == n.x) return m.y>n.y;//if first two index equal then sort second two element larger to smaller
    else return m.x<n.x;//otherwise first two element sort with smaller to larger
}

int main()
{
    int a,b,c;
    sorta mama[5];
    cin>>a;
    for(int i=0; i<a; i++){
        cin>>mama[i].x>>mama[i].y;
    }
    sort(mama,mama+a,cmp);
    for(int i=0; i<a; i++){
        cout<<mama[i].x<<"  "<<mama[i].y<<endl;
    }
    return 0;
}
/**
input:
4
2 6
2 5
9 1
12 6
output:
2  6
2  5
9  1
12  6
**/
