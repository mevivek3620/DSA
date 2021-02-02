//   https://leetcode.com/problems/trim-a-binary-search-tree/

// Observations:
//      1. For node having value<low,we have to trim the left subtree of the node.Only right subtree will be there.
//      2. For node having value>high,we have to trim the right subtree of the node.Only left subtree will be there.
//      3. Just do the recursion.


class Solution {
    public TreeNode trimBST(TreeNode root, int low, int high) {
        if(root == null)return root;
        if(root.val < low)return trimBST(root.right,low,high);
        if(root.val > high)return trimBST(root.left,low,high);
        
        root.left = trimBST(root.left,low,high);
        root.right = trimBST(root.right,low,high);
        return root;
        
    }
}
    