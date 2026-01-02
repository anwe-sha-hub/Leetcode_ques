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
pair<bool,int>balancefast(TreeNode* root){
    if(root==NULL){
        pair<bool,int>p=make_pair(true,0);
        return p;
    }
    pair<int,int>leftans=balancefast(root->left);
    pair<int,int>rightans=balancefast(root->right);

    bool left=leftans.first;
    bool right=rightans.first;
    bool diff=abs(leftans.second-rightans.second)<=1;

    pair<bool,int>ans;
    ans.second=max(leftans.second,rightans.second)+1;

    if(right && left && diff) ans.first=true;
    else  ans.first=false;

    return ans;
}
    bool isBalanced(TreeNode* root) {
        return balancefast(root).first;
    }
};