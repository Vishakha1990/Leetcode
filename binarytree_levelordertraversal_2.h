/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> levelorderbot ;
        queue<TreeNode*> myqueue ;
        stack<vector<int>> fulltree ;
        myqueue.push(root) ;
        if(!root) {
            return  levelorderbot ;
        }
        while(!myqueue.empty()) {
            int l = myqueue.size() ;
             vector<int> level ;
            for(int i = 0 ; i < l ; i++ ) {
                TreeNode* node = myqueue.front() ;
                myqueue.pop() ;
                level.push_back(node->val) ;
                if(node->left)
                myqueue.push(node->left) ;
                if(node->right)
                myqueue.push(node->right) ;
            }
            
            fulltree.push(level) ;
        }
        
      
        while(!fulltree.empty()) {
            vector<int> curr = fulltree.top() ;
            levelorderbot.push_back(curr) ;
            fulltree.pop() ;
            
        }
        
        return levelorderbot ;
        
    }
};
