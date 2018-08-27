#include <bits/stdc++.h>
using namespace std;
int factorialDigitExtended ( int n, int base ) {
    double x = 0;
    for(int i = 1; i <= n; i++ ) {
        x += log10 ( i ) / log10(base); ///Base Conversion
    }
    int res = ( (int) x ) + 1;
    return res;
}
int main()
{
    int l= factorialDigitExtended(10,12);
    printf("%d",l);

}
//output:
   // 7 digit when 10! convert in base 12
