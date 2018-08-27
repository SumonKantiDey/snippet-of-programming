#include<bits/stdc++.h>

using namespace std;
int main ()
{
    int myints[8] = {10 ,10 ,10 ,18 ,20, 28, 30 ,30};
    vector<int> v(myints,myints+8);           // 10 ,10 ,10 ,18 ,20, 28, 30 ,30
    sort (v.begin(), v.end());                // 10 ,10 ,10 ,18 ,20 ,28 ,30 ,30
    vector<int>::iterator low,up;
    low=lower_bound (v.begin(), v.end(), 20);
    up= upper_bound (v.begin(), v.end(), 28);
    //cout<<low<<endl;
    int upper = upper_bound(myints,myints+8,21)-myints;
    cout<<"upper = "<<upper<<"      "<<myints[upper]<<endl;
    int lower =lower_bound(myints,myints+8,21)-myints;
    cout<<"lower = "<<lower<<"      "<<myints[lower]<<endl;
    cout << "lower_bound at position " << (low- v.begin()) << '\n';
    cout << "upper_bound at position " << (up - v.begin()) << '\n';

  return 0;
}
/*
output:
    upper = 5      28
    lower = 5      28
    lower_bound at position 4
    upper_bound at position 6
*/
