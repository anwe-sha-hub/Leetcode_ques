/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    // using recursion
    //  int solve(TreeNode* root, int &i,int k){
    //      if(root==NULL) return -1;
    //      //l
    //      int leftans=solve(root->left,i,k);
    //      if(leftans!=-1) return leftans;i++;
    //  //n
    //  if(i==k) return root->val;

    // //r
    // return solve(root->right,i,k);
    // }
    int kthSmallest(TreeNode* root, int k) {
        TreeNode* curr = root;
        int c = 0;
        int res=-1;
        while (curr) {
            if (curr->left == NULL) {
                c++;
                if (c == k) res=curr->val;
                curr = curr->right;
            } else {
                TreeNode* prev = curr->left;
                while (prev->right && prev->right != curr)
                    prev = prev->right;
                if (prev->right == NULL) {
                    prev->right = curr;
                    curr = curr->left;
                } else {
                    prev->right = NULL;
                    c++;
                    if (c == k) res= curr->val;
                    curr = curr->right;
                }
            }
        }
        return res;
    }
};