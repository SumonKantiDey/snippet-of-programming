///http://devskill.com/CodingProblems/ViewProblem/208
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define SIZE 10000007///10^9 can solve here
vector<ll>v;
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
            cout<<"No it has no consecutive prime"<<endl;
            continue;
        }
        ll ppp = n;
        //cout<<ppp<<endl;
        total=1;

        for(ll i=0; i<s;i++)///for(int i=0;i<s && sob[i]<=sqrt(ppp);i++)
        {
            num=0;
            if((sob[i]*sob[i]) > n)break;
            if(n%sob[i]==0)
            {
                    num=sob[i];
                    while(n%sob[i]==0){
                        n/=sob[i];
                    }
                  // printf("num=%lld \n",num);
                   v.push_back(num);
            }
        }
        //cout<<"remain number  =-== "<<n<<endl;
        if(n > 1) v.push_back(n);
        cout<<"Total prime factor  :"<<endl;
        for(int i = 0; i<v.size(); i++)
        {
            cout<<v[i]<<endl;
        }
        if (v.size() == 0 || v.size() == 1){
             cout<<"Yes it has consecutive prime"<<endl;
            v.clear();
        }
        else{
            ll upper =upper_bound(sob,sob + s,v[0])-sob;
            upper--;
            //cout<<">>>>>>>>"<<upper<<endl;
         //   cout<<">>>>>>>>"<<prime[upper]<<endl;
            ll u = upper;
            upper += v.size();

            int  pp =0;

           // cout<<upper<<endl;
            for(ll i = u,j = 0; i<upper;j++,i++)
            {
                //cout<<sob[i]<<" >>>>  "<<v[j]<<endl;
               if(sob[i] != v[j])
               {
                  cout<<"No it has no consecutive prime"<<endl;
                  pp = 1;
                  v.clear();
                  break;;
               }
            }
            if(pp == 0)
            {
                cout<<"Yes it has consecutive prime "<<endl;
            }
            v.clear();
        }
    }
    return 0;
}

