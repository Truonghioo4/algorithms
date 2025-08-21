// https://leetcode.com/problems/two-sum
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target){
  // create an vector to store the indices  of the two numbers that add up to the target
  vector<int> target_index;
  // create an unordered_map to store previously seen numbers and their indices
  unordered_map<int, int> hash_table;  // val : index

  // Iterate through the input array
  for(int i=0; i<nums.size(); i++){
    // caculate the complement (target - current number)
    int complement = target - nums[i];
    // if the complement exists in the map
    if(hash_table.find(complement) != hash_table.end()){
      // add the indices to vector
      target_index.push_back(i);
      target_index.push_back(hash_table[complement]);
      // return 
      return target_index;
    }
    // Add the current number an its index to the map
    hash_table[nums[i]] = i;
  }
  // No solution found,  return an empty vector
  return {};
};


