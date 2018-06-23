#include<bits/stdc++.h>
using namespace std;
void fun()
{
    static int a;//aikane a ar man kicu na deleo 0 assign kora ace
    int b=0;
    a++;
    b++;
    cout<<a<<" "<<b<<endl;
}
int main()
{
    fun();
    fun();
    return 0;
}
//normally static declare kora hole man ak bar assign hoi abong oi man ta dore increment hote take...mane
//memory te akbar jaiga near por ar nutun vabe assign hoi na
/*
output:
    1 1
    2 1
*/
