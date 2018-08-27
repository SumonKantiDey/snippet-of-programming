#include<bits/stdc++.h>
using namespace std;
int main()
{

    string binary = bitset<8>(128).to_string(); //to binary
    cout<<"Binary num is :"<<binary<<"\n";
    unsigned long decimal = bitset<8>(binary).to_ulong();
    cout<<"Decimal num is: "<<decimal<<"\n";

    int c,n;
    cin>>c;
    while(c--)
    {
        cout.unsetf(ios::basefield);
        cout.setf(ios::hex);
        cin>>n;
        cout<<"hexadecimal num is : "<<n<<endl;
        cout<<"incremented hexadecimal num is : "<<++n<<endl;
    }
    cout.unsetf(ios::basefield);
    cout.setf(ios::oct);
    int m;
    cin>>m;
    cout<<"octal num is : "<<m<<endl;
}
/**
input output
Binary num is :10000000
Decimal num is: 128
5
9
hexadecimal num is : 9
incremented hexadecimal num is : a
10
hexadecimal num is : a
incremented hexadecimal num is : b
11
hexadecimal num is : b
incremented hexadecimal num is : c
12
hexadecimal num is : c
incremented hexadecimal num is : d
13
hexadecimal num is : d
incremented hexadecimal num is : e
14
octal num is : 16
**/
