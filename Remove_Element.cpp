#include <algorithm>

using namespace std;
class Solution {
public:
    int removeElement(int A[], int n, int elem) {
    	sort(A, A + n);
    	int i, j;
    	for (i = 0; i < n; ++i)
    		if (A[i] == elem)
    			break;
    	for (j = i; j < n; ++j)
    		if (A[j] != elem)
    			break;
    	int numOfelem = j - i;
    	for (; j < n; ++j)
    		A[j - numOfelem] = A[j];
    	return n - numOfelem;
    }
};