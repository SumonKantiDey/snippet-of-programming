#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll>vc;///cover upto 10^15
void divisors(ll n){
    for(ll i = 1; i * i <= n; i++){
        if(n % i == 0) {
            if(n / i == i)  vc.push_back(i);
            else {
                vc.push_back(i);
                vc.push_back(n/i);
            }
        }
    }
}
int main(){
    ll n,k;
    scanf("%lld", &n);
    divisors(n);
    sort(vc.begin(),vc.end());
    for(int i = 0; i < vc.size(); i++)
    {
        cout << vc[i]<<" ";
    }
    return 0;
}
