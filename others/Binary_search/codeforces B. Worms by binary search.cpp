
//codeforces B. Worms

#include<bits/stdc++.h>
using namespace std;
int ara[100000+10];
int m,a,b,c,ans;
int Binary_search(int num)
{
    int hi = a;
    int lo = 0;
    while(lo <= hi){
        int mid = (lo+hi)/2;
        if(ara[mid] >= num){
            ans=mid;
            hi=mid-1;
        }
        else lo = mid+1;
    }
    return ans;
}
int main()
{
    int n;
    scanf("%d",&a);
    ara[0]=0;
    for(int i=1; i<=a; i++){
       scanf("%d",&b);
       ara[i]=ara[i-1]+b;
    }
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%d",&m);
        int res = Binary_search(m);
        cout<<res<<endl;
    }
    return 0;
}
