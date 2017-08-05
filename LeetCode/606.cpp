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
    string tree2str(TreeNode* t) {
        string s = "";
        if(t == NULL) 
            return s;
        
        ostringstream con;
        con << t->val;
        string num = con.str();
        
        s = s+ num;
        if(t->left == NULL && t->right == NULL )
            return s;
        
        s = s+ "(" + this->tree2str(t->left) + ")";
        if(t->right != NULL)
            s+= "(" + this->tree2str(t->right) + ")";
        
        return s;
        
    }
};