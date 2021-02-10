//   https://leetcode.com/problems/binary-search-tree-to-greater-sum-tree/

//--->>> Recursive approach
// The basic idea is that before visiting any node in the tree,
// we must first visit all nodes with greater value. 
// Where are all of these nodes conveniently located? 
// In the right subtree.

class Solution {
public:
    int sum = 0;
    TreeNode* convertBST(TreeNode* root) {
        if(root == NULL)return root;
        convertBST(root->right);
        sum += root->val;
        root->val = sum;
        convertBST(root->left);
        return root;
    }
};

