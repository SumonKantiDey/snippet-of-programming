//Ref :https://www.youtube.com/watch?v=_qpOfVVspg8
#include<bits/stdc++.h>
using namespace std;
/**
                        ......Vector resize .......

int main()
{
     vector<int>v1(5,-4);//if i want to initialize fixed size of  a vector with fixed element -1 or something
     v1.resize(6,8);//previous has 5 element if i want increase index then use this function here  set increase index value 8
     vector<int>::iterator it;//if we want to indicate a index
     it = v1.begin();
    for (it=v1.begin(); it!=v1.end(); ++it)
     cout << ' ' << *it;
     cout<<endl<<endl;

     for(int i=0; i<10; i++){//Here we see will show extra vector index value is 0
        cout<<v1[i]<<"  "<<i<<endl;
     }
   // v1.clear();
     printf("%d>>\n",v1[4]);//if i want fixed index element of a vector
      printf("%d",v1.at(4));//if i want fixed index element of a vector
}
output:
 -4 -4 -4 -4 -4 8

-4  0
-4  1
-4  2
-4  3
-4  4
8  5
0  6
0  7
0  8
0  9
-4>>
-4
**/


/**
              ......List...........
int main()
{
     int ara[5]={10,20,30,40,50};
     /**
     ara[5] =index[0] to index[4] so if we sent array in list we
     should sent last address of array where no value as we insert
     value in list so we should write (ara,ara+5) here 5 indicate
     index after total arrray indexs

     list<int>l(ara,ara+5);
     list<int>::iterator it;
     it = l.begin();
     for(int i=0; i<l.size(); i++){
        //while(l.size()--)
        if(i==2){
            l.insert(it,2,99);
        }
      //  if(i==3){
         //   l.erase(it);
        //}
        //cout<<*it<<endl;
        it++;
     }
     l.unique();//take value only one
     l.sort();
     l.remove(30);//if we want remove 30 from list
     l.reverse();
     for (it=l.begin(); it!=l.end(); ++it)
      std::cout << ' ' << *it;
}
**/

/**
        .........deque.......
int main()
{
    deque<int>dq(5,-1);
    for(int i=0; i<5; i++){
        cout<<dq[i]<<endl;
    }
    dq.push_front(100);
    dq.push_front(120);
    dq.pop_front();
    dq.push_front(150);
    cout<<endl;
    for(int i=0; i<dq.size(); i++){
        cout<<dq[i]<<endl;
    }
}
**/

/**
              ........set......
int main()
{
    int ara[5]={10,20,30,30,50};
    set<int>s(ara,ara+5);
    set<int>::iterator it;
    cout<<" 10 ace ==="<<s.count(10)<<endl;
    for (it=s.begin(); it!=s.end(); ++it)
    cout << ' ' << *it;
    cout<<endl;
    for (it=s.lower_bound(20); it!=s.end(); ++it)
    cout << ' ' << *it;
    cout<<endl;
    for (it=s.upper_bound(20); it!=s.end(); ++it)
    cout << ' ' << *it;
}
**/

/**
           .......multiset.........
int main()
{
    int ara[5]={10,20,30,30,50};
    multiset<int>s(ara,ara+5);
    multiset<int>::iterator it;
    cout<<" 30 ace ==="<<s.count(30)<<endl;
     for (it=s.begin(); it!=s.end(); ++it)
    cout << ' ' << *it;
    cout<<endl;
    it = s.find(30);//if we want earse only one 30
    s.erase(it);
    for (it=s.begin(); it!=s.end(); ++it)
    cout << ' ' << *it;
    cout<<endl;
    for (it=s.lower_bound(20); it!=s.end(); ++it)
    cout << ' ' << *it;
    cout<<endl;
    for (it=s.upper_bound(30); it!=s.end(); ++it)
    cout << ' ' << *it;
}
**/

/**
            ......map.......
int main()
{
    map<string,int>mp;
    map<string,int>::iterator it;
    int num;
    string ss;
    for(int i=0; i<4; i++){
        cin>>ss>>num;
        mp.insert(make_pair(ss,num));
   }
    it = mp.find("sumon");
    mp.erase(it);//Earse full sumon index
   for (it=mp.begin(); it!=mp.end(); ++it){
    cout << it->first <<"   "<< it->second<<endl;;
   }
    //cout<<mp["*it"]<<endl;
}
//input:
//zzzzz 123
//sumon 789
//aaaa 123456
//ddd 1
//output:
//aaaa   123456
//ddd   1
//zzzzz   123
**/
/**
          ......multipap......
int main()
{
    multimap<string,int>mp;
    multimap<string,int>::iterator it;
    int num;
    string ss;
    for(int i=0; i<4; i++){
        cin>>ss>>num;
        mp.insert(make_pair(ss,num));
   }
     it = mp.lower_bound("sumon");
     //here we canfound how many number in one person
       cout<<"sumon has : "<<endl;
       for(; it!=mp.upper_bound("sumon"); it++){
        cout<<it->second<<" ";
     }
}
input:
sumon 4569
sujan 369
sumon 12596
sumon 123

output:
sumon has :
4569 12596 123
**/
