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
    vector<int> inorderTraversal(TreeNode *root) {
        std::vector<int> visited;
        std::stack<TreeNode*> openStack;
        if (root == NULL) return visited;
        while(root || !openStack.empty()){
            while(root) {
                openStack.push(root);
                root = root->left;
            }
            root = openStack.top(); openStack.pop();
            visited.push_back(root->val);
            root = root->right;
        }
        return visited;
    }
};