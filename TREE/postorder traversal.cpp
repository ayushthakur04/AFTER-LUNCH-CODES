class Solution {
public:

    vector<int> postorderTraversal(TreeNode* root) {
       stack<TreeNode*>S;
       vector<int>A;
       if(root) S.push(root);
       while(!S.empty())
       {
           TreeNode* temp=S.top();
           
          
           
           
           if(temp->left)
           {
               S.push(temp->left);
               temp->left=NULL;
               
           }
           else if(temp->right)
           {
               S.push(temp->right);
              temp->right=NULL;
           }
           else{
           A.push_back(temp->val);
           S.pop();
           }
       }
      
       return A; 
          }
};
