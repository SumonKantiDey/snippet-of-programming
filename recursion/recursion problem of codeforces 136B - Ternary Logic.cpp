#include<bits/stdc++.h>
using namespace std;
int recursion(int a,int c)
{
    //cout<<"Take the value a and c: "<<a<<" "<<c<<endl;
    if(a==0)return c;
    int res=((c%3) - (a%3)+3)%3;
    //cout<<"a==0 na howa porjonto res :   "<<res<<endl;
    int res2=recursion(a/3,c/3);//aikane protakek bar ager value return hocce
    //cout<<"start return:"<<endl<<endl;
    //cout<<"a==0 howar por print kora start toal return :"<<res2<<endl;
    return res2*3+res;
}
int main()
{
    int l,m;
    cin>>l>>m;
    int result=recursion(l,m);
    cout<<result<<endl;
    return 0;
}
