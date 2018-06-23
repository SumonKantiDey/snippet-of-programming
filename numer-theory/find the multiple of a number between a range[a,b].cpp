///prob http://devskill.com/CodingProblems/ViewProblem/191
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mx 100005

ll r1(ll n){
    ll i = 1;
    --n;
    while(n--){
        i*=10;
    }
    return i;
}

ll r2(ll n){
    ll i = 1;
    while(n--){
        i*=10;
    }
    return i;
}

ll solution(ll A, ll B, ll K){
       ll b = B/K;  // From 0 to B the integers divisible by K
       ll a = A/K;  // From 0 to A the integers divisible by K
       //cout<<b<<"  "<<a<<endl;
       if (A%K == 0) { // "A" is inclusive; if divisible by K then
           --a;        //   remove 1 from "a"
       }
        //  cout<<b<<"  "<<a<<endl;
       return b-a;     // return integers in range
}


int main()
{
    ll n, k;
    int  t;
    cin>>t;
    for(int i = 0; i < t; i++){
        cin>>n>>k;
        ll l = r1(n), r = r2(n);
        //cout << l << " " << r-1 << endl;
        cout << solution(l, r-1, k) << endl;
    }
    return 0;
}
