//   https://leetcode.com/problems/binary-tree-right-side-view/

// Observations:
    // 1.Traverse the whole tree in such a way that right subtree comes before left subtree.


// Recursive approach

class Solution {
    public:
    vector<int>ans;
    
    void getRight(TreeNode* root,int level)
    {
        if(root == NULL)return ;
        if(level == ans.size())ans.push_back(root->val);
        if(root->right != NULL)getRight(root->right,level + 1);
        if(root->left != NULL)getRight(root->left,level + 1);
        
    }
    
    vector<int> rightSideView(TreeNode* root) {
        getRight(root,0);
        return ans;
    }
}
    
// Iterative approach
public:
vector<int> rightSideView(TreeNode* root) {
    vector<int>ans;
    if(root == NULL)
    {
        return ans;
    }
    
    queue<pair<TreeNode*,int>>q;
    q.push({root,0});
    int d = 0;
    while(!q.empty())
    {
        TreeNode* curr = q.front().first;
        d = q.front().second;
        if(d == ans.size())ans.push_back(curr->val);
        q.pop();
        
        if(curr->right){
            q.push({curr->right,d+1});
        }
        if(curr->left){
            q.push({curr->left,d+1});
        }
    
    }
    return ans;
}