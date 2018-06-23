#include<bits/stdc++.h>
using namespace std;
//int main()
//{
//    string ss;
//    cin>>ss;
//    int k=ss.size();
//   // cout<<"k===="<<k<<endl;
//    int i=0;
//    for(;i<k;){
//            if(ss[i]=='1'&&ss[i+1]=='4'&&ss[i+2]=='4')i+=3;
//             else if(ss[i]=='1'&&ss[i+1]=='4')i+=2;
//             else if(ss[i]=='1')i+=1;
//             //cout<<i<<endl;
//            else break;
//             if(i==ss.size()){
//                cout<<"YES"<<endl;
//                return 0;
//            }
//           //
//
//    }
//
//    cout<<"NO"<<endl;
//}
//****normal solve end ***//
bool sol(int n){
    if(n==1 || n==14 || n==144)return 1;
    if(n%10==1 && sol(n/10)!=0)return 1;
    if(n%100==14 && sol(n/100)!=0)return 1;
    if(n%1000==144 && sol(n/1000)!=0)return 1;
    //if(n%10==1 && solve(n)!=0)return 1;
return 0;


}

int main()
{
    int n;
    cin>>n;
    int k= sol(n);
    if(k==1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
