// https://leetcode.com/problems/maximum-subarray/
#include<vector>
#include <bits/stdc++.h>
using namespace std;
// solution 1: Brute force 
int maxSubArray(vector<int>& nums){
  int maxSum= INT_MIN;
  for(int i=0; i< nums.size(); i++){
    int currentSum =0;
    for(int j=i; j<nums.size(); j++){
      currentSum += nums[j];
      maxSum = max(maxSum, currentSum);
    }
  }
}

// solution 2: prefixSum + brute force
int maxSubArray2(vector<int>& nums){
  int maxSum = nums[0];
  int currentSum = 0;
  for(int i=0; i<nums.size(); i++){
    if(currentSum <0 ) currentSum =0;
    currentSum += nums[i];
    maxSum = max(maxSum, currentSum);
  }
  return maxSum;
}

