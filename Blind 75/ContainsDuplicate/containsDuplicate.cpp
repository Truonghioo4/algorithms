// https://leetcode.com/problems/contains-duplicate/description

using namespace std;
#include <vector>;
#include <unordered_set>;
// use hash set (unordered_set)
bool containsDuplicate(vector<int> &nums){
  unordered_set<int> seen;
  for(int num : nums){
    if(seen.count(num)) return true;
    seen.insert(num);
  }
  return false;
}