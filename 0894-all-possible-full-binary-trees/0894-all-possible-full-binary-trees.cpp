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
    vector<TreeNode*> allPossibleFBT(int n) {
        if(n%2==0)
        return {};
        if(n==1)
        return {new TreeNode(0)};
        vector<TreeNode*>ans;
        for(int left=1;left<n;left+=2){
            int right=n-1-left;
            vector<TreeNode*> leftTrees=allPossibleFBT(left);
            vector<TreeNode*> rightTrees=allPossibleFBT(right);
            for(TreeNode* l:leftTrees){
                for(TreeNode* r:rightTrees){
                    TreeNode* root=new TreeNode(0);
                    root->left=l;
                    root->right=r;
                    ans.push_back(root);
                }
            }
        }
        return ans;
    }
};