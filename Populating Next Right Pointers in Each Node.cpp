/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
#include <queue>
#include <cmath>
  struct TreeLinkNode {
   int val;
   TreeLinkNode *left, *right, *next;
   TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
  };
class Solution {
public:
    void connect(TreeLinkNode *root) {
    	std::queue<TreeLinkNode*> openQueue;
    	if (root != NULL) openQueue.push(root);
    	int level = 0;
    	while(!openQueue.empty()) {
    		TreeLinkNode *node;
    	    for (int i = 0; i < pow(2, level); ++i)
    	    {
				node = openQueue.front(); openQueue.pop();
    	    	node->next = openQueue.front();
    	    	if (node->left != NULL) openQueue.push(node->left);
    	    	if (node->right != NULL) openQueue.push(node->right);	
    	    }
    	    node->next = NULL;
    	    level++;
    	}

    }
};