///All diagonal for 5 * 5 matrix
#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll p = 0, q = 0;
ll a,b,x,y;
int n;
ll res = 0;
int main()
{

    for(int i = 1; i<=5; i++){
        x = 1;
        y = i;
        while(x >=1 && x <=5 && y >=1 && y <=5)
        {
            cout << x << " "<< y <<endl;
            x++; y++;
        }
        cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" <<endl;
    }
    for(int i = 2; i<=5; i++){
        x = i;
        y = 1;
        while(x >=1 && x <=5 && y >=1 && y <=5)
        {
            cout << x << " "<< y <<endl;
            x++; y++;
        }
        cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" <<endl;
    }

    for(int i = 2; i<=5; i++){
        x = i;
        y = 5;
        while(x >=1 && x <=5 && y >=1 && y <=5)
        {
          cout << x << "  " <<y <<endl;
          x++; y--;
        }
        cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" <<endl;
    }

    for(int i =2; i<=5; i++){
        x = 1;
        y = i;
        while(x >=1 && x <=5 && y >=1 && y <=5)
        {
            cout << x << " "  << y <<endl;
            x++; y--;
        }
        cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" <<endl;
    }
    return 0;


}

