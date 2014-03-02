class Solution {
public:
    int maxSubArray(int A[], int n) {
        // IMPORTANT: Please reset any member data you declared, as
        // the same Solution instance will be reused for each test case.
        if(n==0) return 0;
        return maxSubArrayHelperFunction(A,0,n-1);
    }

    int maxSubArrayHelperFunction(int A[], int left, int right) {
        if(right == left) return A[left];
        int middle = (left+right)/2;
        int leftans = maxSubArrayHelperFunction(A, left, middle);
        int rightans = maxSubArrayHelperFunction(A, middle+1, right);
        int leftmax = A[middle];
        int rightmax = A[middle+1];
        int temp = 0;
        for(int i=middle;i>=left;i--) {
            temp += A[i];
            if(temp > leftmax) leftmax = temp;
        }
        temp = 0;
        for(int i=middle+1;i<=right;i++) {
            temp += A[i];
            if(temp > rightmax) rightmax = temp;
        }
        return max(max(leftans, rightans),leftmax+rightmax);
    }
};