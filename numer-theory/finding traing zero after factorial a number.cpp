 codeforces problem 633 B. A Trivial Problem
 #include<bits/stdc++.h>
using namespace std;
vector< int >V;
int fact(int num)
{
    int i, k,sum=0;
    while(num!=0){
        k=num/5;
        sum+=k;
        num=k;
    }
    return sum;
}
int main()
{

    int kase=0;
    long long number,result,test;
    cin>>number;
    for(int i = 0;i<=1000000;i++){
        result=fact(i);
        if(result==number){
            V.push_back(i);
        }
    }
    cout<<V.size()<<endl;
    for(int i=0; i<V.size() ; i++){
        cout<<V[i]<<" ";
    }
    return 0;
}
