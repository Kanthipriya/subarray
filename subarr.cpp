#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
   int subarraySum(vector<int>& n, int k) {
      unordered_map <int, int> sums;
      int temp = 0;
      sums[0] = 1;
      int ans =0;
      for(int i =0;i<n.size();i++){
         temp+= n[i];
         if(sums.find(k-temp)!=sums.end()){
            ans += sums[k-temp];
         }
         sums[-temp]++;
      }
      return ans;
   }
};