// https://leetcode.com/problems/product-of-array-except-self/
#include <vector>
using namespace std;
// solution 1: Brute Force
// solution 2: Prefix Product + Suffix Product
// solution 3: Memory optimization with 1 arr and 1 variable
vector<int> productExceptSelf2(vector<int>& nums){
  vector<int> prefix, suffix, ans;
  for(int i=1; i<nums.size(); i++){
    prefix[i] = prefix[i-1] * nums[i-1];
  }

  for(int i = nums.size()-2; i>=0; i--){
    suffix[i] = suffix[i+1] * nums[i+1]; 
  }
  for(int i=0; i<nums.size(); i++){
    ans[i] = prefix[i]*suffix[i];
  }
  return ans;
}

// case 3: 
vector<int> productExceptSelf(vector<int>& nums){
  vector<int> ans;
  int prefix =1;
  for(int i=0; i<nums.size(); i++){
    ans[i] = prefix;
    prefix *= nums[i];
  }

  int suffix = 1;
  for(int i= nums.size()-1; i>=0; i--){
    ans[i]*=suffix;
    suffix *= nums[i];
  }
  return ans;
}