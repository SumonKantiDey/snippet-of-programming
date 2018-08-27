//https://leetcode.com/problems/two-sum/#/description
#include<bits/stdc++.h>
#include<sstream>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target){
        vector <int> res(2,0);
        map<int,int>mp;
        //memset(mp,0,sizeof(mp));
        int pp = 0;
        for(int i = 0; i < nums.size(); i++)
        {
             int tmp = target - nums[i];
             if(mp.find(tmp) != mp.end())
             {
                 res[0] = mp[tmp];
                 res[1] = i;
                 return res;
             }
             mp[nums[i]] = i;
        }
        return res;
    }
};

int main()
{
    Solution s;
    vector <int>v;
    int p;
    cin >> p;
    for(int i = 0; i <= 3; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);

    }
     vector <int> v1 = s.twoSum(v,p);
     cout << v1.size() <<endl;
     cout << v1[0] << "" << v1[1] <<endl;
     return 0;
}
