#include <algorithm>

class Solution {
 public: int maxSubArray(int A[], int n) { 
     int sum; 
     int max = sum = A[0]; 
     for (int i = 1; i < n; i++) {
        sum = sum > 0 ? (A[i] + sum) : A[i]; 
        max = std::max(max, sum); 
     }
     return max;
 }
};