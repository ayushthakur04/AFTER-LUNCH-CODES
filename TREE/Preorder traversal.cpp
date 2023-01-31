class Solution {
public:

    vector<int> preorderTraversal(TreeNode* root) {
       stack<TreeNode*>S;
       vector<int>ans;
       if(root){ 
           S.push(root);
       }
       
       while(!S.empty())
       {
           TreeNode* temp=S.top();
         ans.push_back(temp->val);
         S.pop();
        

         if(temp->right)
         {
             S.push(temp->right);
             temp->right=NULL;
         }
          if(temp->left)
         {
             S.push(temp->left);
             temp->left=NULL;
         }
       }
       return ans;
       
    }

};
