//earase a fixed  index element from a  total string

#include<bits/stdc++.h>
using namespace std;
template <typename T>
int to_int(T num)
{
    int val;
    stringstream stream;
    stream << num;
    stream >> val;
    return val;
}
int main()
{
    string str,str1;
    cin>>str;
    int a = to_int(str);
    str1=str;
    str.erase (remove(str.begin(), str.end(), str[str.size()-1]), str.end());
    //cout<<str<<endl;
    str1.erase (remove(str1.begin(), str1.end(), str1[str1.size()-2]), str1.end());
    // cout<<str1<<endl;
    int b = abs(to_int(str));
    int c = abs(to_int(str1));
    cout<<b<<endl;
    cout<<c<<endl;
    return 0;
}
/*
input: 10005
output:
    1000
    15
input: 123456
output:
    12345
    12346
*/
