///http://codeforces.com/contest/799/problem/B
#include<bits/stdc++.h>
using namespace std;

typedef pair<int,int> PII;

set<PII> S[4];
set<PII>::iterator it;
int n;
int p[200005], a[200005], b[200005];

int main()
{
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &p[i]);
	}
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < n; i++) {
		scanf("%d", &b[i]);
	}

	for (int i = 0; i < n; i++) {
		S[a[i]].insert(PII(p[i], i));
		S[b[i]].insert(PII(p[i], i));
	}
	cout << S[1].size() <<endl;

	PII x = *S[1].begin();
	cout <<"Indicate the first adjacent : "<< x.first << "  " << x.second  <<endl;
	for (auto it = S[1].begin(); it!=S[1].end(); it++){
         int v = it->first;
         int w = it->second;
         cout << v << "  " << w << endl;
    }
	int m;
	scanf("%d", &m);
	int bl = 0;
	while(m--){
		if (bl) printf(" ");
		bl = 1;
		int c;
		scanf("%d", &c);
		if(S[c].empty()) {
           printf("-1");
           continue;
		}

		PII x = *S[c].begin();
		S[a[x.second]].erase(x);
		S[b[x.second]].erase(x);

		printf("%d", x.first);
	}
	printf("\n");
	return 0;
}
