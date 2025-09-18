#include <bits/stdc++.h>
using namespace std;

void insertSort(int arr[], int n){
  for(int i=1; i<n; i++){
    int x =arr[i], pos = i-1;
    while(pos>=0 && x < arr[pos]  ){
      arr[pos+1] = arr[pos];
      --pos;
    }
    arr[pos+1] = x;
  }
}