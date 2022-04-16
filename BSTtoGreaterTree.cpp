/*
Given the root of a Binary Search Tree (BST), convert it to a Greater Tree such that every key of the original BST is changed to the original key plus the sum of all keys greater than the original key in BST.

As a reminder, a binary search tree is a tree that satisfies these constraints:

The left subtree of a node contains only nodes with keys less than the node's key.
The right subtree of a node contains only nodes with keys greater than the node's key.
Both the left and right subtrees must also be binary search trees.

Example 1:
Input: root = [4,1,6,0,2,5,7,null,null,null,3,null,null,null,8]
Output: [30,36,21,36,35,26,15,null,null,null,33,null,null,null,8]

Example 2:
Input: root = [0,null,1]
Output: [1,null,1]
*/

//--------------Solution---------------//
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    int curr_sum;
    void traverse(TreeNode* node)
    {
        if(node->right)
            traverse(node->right);
        
        curr_sum+=node->val;
        node->val=curr_sum;
        
        if(node->left)
            traverse(node->left);

    }
    
    TreeNode* convertBST(TreeNode* root) {
        if(!root)
            return root;
        
        curr_sum=0;
        traverse(root);
        return root;
    }
};


//----EXPLAINTION-----//
/*
EXPLANATION

Since, the input is a BST, the right-most node in the tree is the maximum value present in the tree. So we first recursively go to the right-most node of the tree then process that node then go left.
That is, [ Go right ] then [ Process node ] then [ Go left ] recursively. ( Reverse Inorder Traversal )
While processing each node, we need to add the current node's val to the curr_sum ( curr_sum+=node->val ) and also update current node's val to curr_sum ( node->val=curr_sum ).
After the whole traversal of the tree, return root.
CODE IMPLEMENTATION

class Solution {
public:
    int curr_sum;
    void traverse(TreeNode* node){
        // Go right
        if(node->right) traverse(node->right);
        
        // Process node, add curr value to the right most node recursively
        curr_sum+=node->val;
        node->val=curr_sum;
        
        // Go left
        if(node->left) traverse(node->left);
    }
    
    TreeNode* convertBST(TreeNode* root) {
        // if root is null return root
        if(!root) return root;
        
        // curr will store the sum of node-values higher than current node
        curr_sum=0;
        traverse(root);
        return root;
    }
};
TIME COMPELXITY
O(n) [As each node is traversed exactly once]

SPACE COMPLEXITY
O(n) [For recursion stack]
*/