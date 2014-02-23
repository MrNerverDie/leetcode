#include <vector>
#include <stack>

using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
 
class Solution {
public:
    vector<int> preorderTraversal(TreeNode *root) {
    	std::vector<int> visited;
    	std::stack<TreeNode*> openStack;
    	if (root != NULL) openStack.push(root); 
    	while(!openStack.empty()) {
    		TreeNode *node = openStack.top(); openStack.pop();
    		visited.push_back(node->val);
    		if (node->right != NULL) openStack.push(node->right);
    		if (node->left != NULL) openStack.push(node->left);
    	}
        return visited;
    }
};