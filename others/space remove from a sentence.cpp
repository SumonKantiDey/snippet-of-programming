#include <iostream>
#include <string>
#include <sstream>
#include<bits/stdc++.h>
using namespace std;
char str[10000];
int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    while(t--){
        gets(str);
        cout << "size of the sentence = "<<strlen(str) << endl;
        stringstream ss;
        ss<<str;
        while(ss>>str)
        {
            cout << str << endl;
        }
    }
    return 0;
}
/*
2

size of the sentence = 6 //all are white space
abcd xyz
size of the sentence = 8
abcd
xyz

*/
