#include<bits/stdc++.h>
using namespace std;
int ternarySearch(int arr[], int l, int r, int x)
{
   if(r >= l){
      int mid1 = l + (r - l)/3;
      int mid2 = mid1 + (r - l)/3;
      //  cout<<mid1<<"      "<<mid2<<endl;
      // If x is present at the mid1
      if (arr[mid1] == x)  return mid1;
      // If x is present at the mid2
      if (arr[mid2] == x)  return mid2;
      // If x is present in left one-third
      if (arr[mid1] > x) return ternarySearch(arr, l, mid1-1, x);
      // If x is present in right one-third
      if (arr[mid2] < x) return ternarySearch(arr, mid2+1, r, x);
      // If x is present in middle one-third
      return ternarySearch(arr, mid1+1, mid2-1, x);
    }
   // We reach here when element is not present in array
   return -1;
}
int main()
{
    int arr[] = {1,2,4,12,15};
    int sz = sizeof(arr)/sizeof(arr[0]);
    int value = 15;
    int res = ternarySearch(arr,0,sz-1,value);
    if(res >= 0)
    {
        cout<<"Value found at the position of the array : "<<res<<endl;
    }
    else cout<<"Value is not found in the array :"<<endl;
    return 0;
}

/**
output:
Value found at the position of the array : 4
**/
