// https://leetcode.com/problems/maximum-product-subarray/
#include<bits/stdc++.h>
using namespace std;
int maxProduct(vector<int>& nums){
  int n = nums.size();
  int res = nums[0];
  int curMax = 1;
  int curMin = 1;
  for(int i=0; i<n; i++){
    if(nums[i]<0) swap(curMax, curMin);
    curMax = max(nums[i], nums[i]*curMax);
    curMin = min(nums[i], nums[i]*curMin);
    res = max(res, curMax);
  }
  return res;
}