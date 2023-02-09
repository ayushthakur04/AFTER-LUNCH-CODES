class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        stack<TreeNode*>s;
        vector<int>a;
        if(root){
           s.push(root); 
        } 

        while(!s.empty() )
        { 
            TreeNode* temp=s.top();
            if(temp->left)
            {
                s.push(temp->left);
                temp->left=NULL;
            }
            else if(temp->right)
            {
                s.push(temp->right);
                temp->right=NULL;
            }
            else 
            {
                a.push_back(temp->val);
                s.pop();
            }
        }
        return a;    
    }
};
