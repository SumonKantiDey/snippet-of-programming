#include <iostream>
#include <set>
using namespace std;
int main ()
{
  set<int> myset;
  set<int>::iterator it;
  myset.insert (100);
  myset.insert (200);
  myset.insert (300);
  myset.insert (200);
  myset.insert (100);
  cout << "myset contains:";
  for(it=myset.begin(); it!=myset.end(); ++it)
      cout << ' ' << *it;
  cout << '\n';
  myset.clear();
  myset.insert (1101);
  myset.insert (2202);
  myset.insert (300);
  myset.insert (300);
  cout << "myset contains:";
  for (it=myset.begin(); it!=myset.end(); ++it)
       cout << ' ' << *it;
  cout << '\n';
  return 0;
}
