#include <bits//stdc++.h>
using namespace std;

#define mp make_pair
#define pb push_back
#define INF (int)1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define MAX 1000000
#define all(x) x.begin(),x.end()
#define sz(x) ((int)x.size())
#define sqr(x) ((x)*(x))
#define SET(x) memset(x, 0, sizeof(x))
#define CLR(x) memset(x, -1, sizeof(x))
#define F first
#define S second
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
#define in scanf
#define pf printf
#define sf(n)       scanf("%d", &n)
#define sff(a,b)    scanf("%d %d", &a, &b)
#define sfff(a,b,c) scanf("%d %d %d", &a, &b, &c)
#define Unique(store) store.resize(unique(store.begin(),store.end())-store.begin())///after sort
#define lead_zero(n) __builtin_clz(n)
#define trail_zero(n) __builtin_ctz(n)
#define one(n) __builtin_popcount(n)
typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<PII> VII;
typedef vector<VI> VVI;
typedef map<int,int> MP;
typedef set<int> SETI;
typedef multiset<int> MSETI;
typedef long long int vlong;
typedef unsigned long long int  uvlong;
inline bool EQ(double a, double b) { return fabs(a-b) < 1e-9; }
inline int gcd(int a, int b) { if (b == 0) return a; return gcd(b, a % b);}

template <class T> inline T bigmod(T p,T e,T M){
    vlong ret = 1;
    for(; e > 0; e >>= 1){
        if(e & 1) ret = (ret * p) % M;
        p = (p * p) % M;
    } return (T)ret;
}
template <class T> inline T modinverse(T a,T M){return bigmod(a,M-2,M);}// 17X = 1 mod(43) so X = (1/17) mod(43)

template <class T> inline T power ( T a, T p ) {
    vlong res = 1, x = a;
    while ( p ) {
        if ( p & 1 ) res = ( res * x );
        x = ( x * x ); p >>= 1;
    }
    return res;
}
//Debug
#define DDD(x,y,z) cerr<<__FUNCTION__<<":"<<__LINE__<<": "#x" = "<<x<<" | "#y" = "<<y<<" | "#z" ="<<z<<endl;
#define DD(x,y) cerr<<__FUNCTION__<<":"<<__LINE__<<": "#x" = "<<x<<" | "#y" = "<<y<<endl;
#define D(x) cerr<<__FUNCTION__<<":"<<__LINE__<<": "#x" = "<<x<<endl;

//Convert int to string
template <typename T>
string to_str(T str)
{
    stringstream stream;
    stream << str;
    return stream.str();
}

//Convert string to int
template <typename T>
int to_int(T num)
{
    int val;
    stringstream stream;
    stream << num;
    stream >> val;
    return val;
}

//Split String by Single Character Delimiter
vector<string> split(const string& s, char delim)
{
    vector<string> elems;
    stringstream ss(s);
    string item;

    while (getline(ss, item, delim))
        elems.push_back(item);

    return elems;
}
// this function goes to main for splitting
//vector<string> words;
//words = split("lorem_ipsum_dolor_sit_amet_no_tota_tacimates_delicata_eum", '_');
//for(int i=0; i<words.size(); i++)
//cout << words.at(i) << endl;

/**
//sort with respect to the second element in a pair !!
bool comp(const pair<int, int>&i, const pair<int, int>&j) {
        return i.second < j.second;
}
vector< pair<int, int> >v;
sort(v.begin(), v.end(), comp);
**/
//cout << fixed << setprecision(20) << p << endl;
const int dr [] = {-1, -1, 0, 1, 1, 1, 0, -1};
const int dc [] = {0, 1, 1, 1, 0, -1, -1, -1};
const int dx[] = {0,0,-1,1};
const int dy[] = {1,-1,0,0};

const int T2=105; const int T3=1005; const int T4=10005; const int T5=100005;
struct point {
 int x , y;
 point () {}
 point (int x_ , int y_) {
  x = x_; y = y_;
 }
};
bool cmp(point m,point n){
    if(m.x == n.x)
    return m.y>n.y;//if first two index equal then sort second two element larger to smaller
    else return m.x<n.x;//otherwise first two element sort with smaller to larger
}


vector <point>v;
int main()
{
  int n;
  int a,b;
  cin >> n;
  for(int i = 0; i < n ; i++)
  {
      cin >> a >> b;
      v.pb(point(a,b));
  }
  sort(v.begin(),v.end(),cmp);
  for(int i = 0; i < n ; i++)
  {
      point pp = v[i];
     cout << pp.x << "  " <<pp.y <<endl;
  }
  return 0;
}


