#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	scanf("%d", &n);
	set<int> s;
	for(int i = 0; i < n; i++){
		int c;
		scanf("%d", &c);
		while(s.find(c) != s.end()){
			cout<<"erase"<<c<<endl;
			s.erase(c++);

		}
		s.insert(c);
		cout<<"insert"<<c<<endl;
	}

///	cout << s.size();
}
