class Solution {
public:
    int searchInsert(int A[], int n, int target) {
    	int i = 0;
    	for (; i < n; ++i)
    	{
    		if (A[i] >= target)
    			return i;
    	}
     	return i;   
    }
};