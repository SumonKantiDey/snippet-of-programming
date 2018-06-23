#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define SIZE 10000007///10^14 can cover
vector<pair<ll,ll> >v;
ll sob[SIZE], s = 0;
bool prime[SIZE];
void SEIEVE()
{
    long long unsigned i, j, lim = SIZE;
    for(i=2; i<=lim; i++)
    {
        if(prime[i]==0)
        {
            sob[s++] = i;
            for(j=i*i; j<SIZE; j+=i)
            {
                prime[j] = 1;
            }
        }
    }
    s--;
    return;
}
/*
bool IS_PRIME(ll a)
{
    ll j = 0, p = a;
    for(j=0; j<s and a>sob[j]; j++)
    {
        if(a%sob[j]==0)
            return false;
    }
    return true;
}
*/
int main()
{
    int m,T,l=0,total;
    SEIEVE();
    int t;
    long long num,n,temp = 1;
    scanf(" %d",&t);
    while(t--)
    {

        scanf("%lld",&n);
        if(n == 1 || n == 0)
        {
            cout<<"No prime factor"<<endl;
            continue;
        }
        ll ppp = n;
        total=1;
        int cnt = 0;
        for(ll i=0; i<s;i++)///for(int i=0;i<s && sob[i]<=sqrt(ppp);i++)
        {
            num=0;
            cnt = 0;
            if((sob[i]*sob[i]) > n)break;
            if(n%sob[i]==0)
            {
                num=sob[i];
                while(n%sob[i]==0)
                {
                    n/=sob[i];
                    cnt++;
                }
              // printf("num=%lld \n",num);
                v.push_back(make_pair(num,cnt));
            }
        }
        //cout<<"remain number  =-== "<<n<<endl;
        if(n > 1) v.push_back(make_pair(n,1));
        cout<<"Total prime factor  :"<<endl;
        for(int i = 0; i<v.size(); i++)
        {
            cout<<"Base = "<<v[i].first<<"  power = "<<v[i].second<<endl;
        }
        v.clear();
    }
    return 0;
}


