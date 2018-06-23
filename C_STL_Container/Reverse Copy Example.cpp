// reverse_copy example which is difference from reverse STL
#include<bits/stdc++.h>
using namespace std;
/*
int main ()
{
    int myints[] ={1,2,3,4,5,6,7,8,9};
    vector<int> myvector;
    vector<int>::iterator it;
    myvector.resize(5);    // allocate space
    reverse_copy (myints, myints+5, myvector.begin());
    // print out content:
    cout << "myvector contains:";
    for (it=myvector.begin(); it!=myvector.end(); ++it)
        cout << ' ' << *it;
    cout << '\n';
  return 0;
}
*/


int ara[100];
int ara1[100];
int main ()
{
    // set some values:
     int v;
     cin>>v;
     for (int i=0; i<v; ++i){
         cin>>ara[i];
     }
     reverse_copy (ara, ara+3, ara1);
     for(int i=0; i<5; i++){
         cout<<ara1[i]<<endl;
     }

  return 0;
}
