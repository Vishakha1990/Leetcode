/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 /*Given a binary tree and a sum, find all root-to-leaf paths where each path's sum equals the given sum.*/
 
 
class Solution {
public:
    void isSum(TreeNode* root, int sum , vector<int>& mypath , vector<vector<int>>& all_paths) {
           mypath.push_back(root->val) ;
           sum = sum - root->val ;
           if(root->left==NULL && root->right==NULL && sum==0) {
           all_paths.push_back(mypath);
           return ;
           }
           if(root->left) {
           isSum(root->left,sum,mypath,all_paths) ;
            mypath.pop_back() ;
               
           }
           if(root->right)  {
           isSum(root->right,sum,mypath,all_paths) ;
            mypath.pop_back() ;
           }
          
           }
        
    
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
         vector<vector<int>> all_paths ;
         vector<int> mypath ;
         if(root) {
         isSum(root,sum,mypath,all_paths) ;
        }
        return all_paths ;
         
       }
};
