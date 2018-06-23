//Codeforces Round #297 (Div. 2) B. Pasha and String
#include<bits/stdc++.h>
using namespace std;
#define pf printf
#define mx 100005
int pos_increment[2*mx];
int main()
{
    string ss;
    int n,m,pos,res=0;
    cin>>ss;
    ss = " "+ss;
    int len  = ss.length();//length 1 basi korlam ss[0] = " " dorlam
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>pos;
        pos_increment[pos]++;
        pos_increment[len - pos + 1]++;//dhori index 1 ar jonno swap kora dorkar 6 ke
                                       //kinto ami aikane index increase korbo 7 ke jate res even na hoi
    }
//    for(int i=0; i<10; i++){
//        cout<<"increment pos = "<<i<<"  "<<pos_increment[i]<<endl;
//    }
    for(int i=1; i<len; i++){
        res+=pos_increment[i];
        if(res%2 == 0){
           cout<<ss[i];
        }
        else{
            cout<<ss[len - i ];
        }
    }
    return 0;
}
/**
input :
abcdef
1
1
output :
increment pos = 0  0
increment pos = 1  1
increment pos = 2  0
increment pos = 3  0
increment pos = 4  0
increment pos = 5  0
increment pos = 6  0
increment pos = 7  1
increment pos = 8  0
increment pos = 9  0
fedcba
**/
