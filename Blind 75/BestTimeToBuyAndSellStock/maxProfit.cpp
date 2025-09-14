// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/
#include<vector>
using namespace std;

// Solution 1
int maxProfit1(vector<int>& prices){
  int minBuy = prices[0];
  int maxSell = 0;
  for(int i=1; i< prices.size(); i++){
    // Find the lowest price possible
    minBuy = min(minBuy, prices[i]);
    // Find the highest price possible
    maxSell = max(maxSell, prices[i] - minBuy);
  }
  return maxSell;
}

// Solution 2, using graphs to solve 
int maxProfit2(vector<int>& prices){
  int l, r = 0; 1; // left = buy, right = sell
  int maxP = 0;

  // Explore all possible ways to buy and sell stock
  while(r < prices.size()){
    if(prices[l] < prices[r]){
      int profit = prices[r] - prices[l];
      maxP = max(maxP, profit);
    } else {
      l = r;
    }
    r+=1;
  }
  return maxP;
}


