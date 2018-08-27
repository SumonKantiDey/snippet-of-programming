//B. Books
#include<bits/stdc++.h>
using namespace std;
int a,b;
 int ara[100005];
int Binary_search(int pos){
   int hi = a;
   int lo = pos;
   int ans = -1;
   while(lo <= hi){
       int  mid=(lo+hi)/2;
       if(ara[mid] - ara[pos-1] <= b){
           ans=mid;
           lo=mid+1;
      }
      else {
        hi=mid-1;
      }
   }
   if(ans == -1)return 0;
   return ans - pos + 1;
}

int main()
{
    int t,ans=0;
    cin>>a>>b;

    ara[0]=0;
    for(int i=1; i<=a; i++){
            cin>>t;
         ara[i]=ara[i-1]+t;
    }
    for(int i=1; i<=a; i++){
           int res = Binary_search(i);
           if(res>ans)ans=res;
    }
    cout<<ans<<endl;
    return 0;
}
