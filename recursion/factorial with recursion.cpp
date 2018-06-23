#include<bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    cout<<"I am calculating  F("<<n<<")\n";
    if(n == 0) return 1;
    int F=n*factorial(n-1);
    cout<<"Done !F("<<n<<")="<<F<<"\n";
    return F;
}

int main()
{
    int number,result;
    cout<<"Give me a number :"<<endl;
    cin>>number;
    result=factorial(number);
    cout<<result<<endl;
    return 0;
}
