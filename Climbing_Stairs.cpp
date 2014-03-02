#include <vector>


class Solution {
public:
    int climbStairs(int n) {
    	// if (n <= 2)
    	// 	return n;
    	// else
    	// 	return climbStairs(n - 1) + climbStairs(n - 2);
    	std::vector<int> v(n + 1, 0);
    	v[1] = 1; v[2] = 2;
    	for (int i = 3; i < n + 1; ++i)
    		v[i] = v[i - 1] + v[i - 2];
    	return v[n];
    }
};