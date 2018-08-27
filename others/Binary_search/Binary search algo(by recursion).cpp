#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int l, int r, int x)
{
   if (r >= l)
   {
        int mid = l + (r - l)/2;

        // If the element is present at the middle itself
        if (arr[mid] == x)  return mid;

        // If element is smaller than mid, then it can only be present
        // in left subarray
        if (arr[mid] > x) return binarySearch(arr, l, mid-1, x);

        // Else the element can only be present in right subarray
        return binarySearch(arr, mid+1, r, x);
   }

   // We reach here when element is not present in array
   return -1;
}
int main()
{
    int arr[] = {1,2,4,12,15};
    int sz = sizeof(arr)/sizeof(arr[0]);
    int value = 15;
    int res = binarySearch(arr,0,sz-1,value);
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
