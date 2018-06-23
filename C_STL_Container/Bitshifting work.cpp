#include<bits/stdc++.h>
using namespace std;
int main()
{
       for(int i=0; i<=5; i++){
            int n = 1<<i;///power of 2 (2^i)
            int m = 1>>i;
            int p = i<<1;///multiple of 2 (2*i)
            int q = i>>1;///divided by 2 (i/2)
            cout<<n<<"  "<<m<<"   "<<p<<"   "<<q<<endl;
    }
}
/**
output:
1  1   0   0
2  0   2   0
4  0   4   1
8  0   6   1
16  0   8   2
32  0   10   2
**/
