/*
By this code we can check one position left point
and right point and upper point and lower point at a time;
*/
///code forces A - Appleman and Easy Task
#include<bits/stdc++.h>

using namespace std;
int main()
{
    char ch[102][102];
    int n,cnt;
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>ch[i][j];
        }
    }
     for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cnt=0;
            if(j+1<n && ch[i][j+1]=='o')cnt++;
            if(j-1>=0 && ch[i][j-1]=='o')cnt++;
            if(i-1>=0 && ch[i-1][j]=='o')cnt++;
            if(i+1<n && ch[i+1][j]=='o')cnt++;
            //cout<<cnt<<endl;
            if(cnt%2!=0){
                cout<<"NO"<<endl;
                return 0;
            }
        }
    }
    cout<<"YES"<<endl;
    return 0;

}
