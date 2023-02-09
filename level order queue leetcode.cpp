class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*>q;
        vector<vector<int>>v;
        if(root) q.push(root);
        while(!q.empty())
        {
            vector<int>a;
            int size=q.size();
            while(size--)
            {
               TreeNode* temp=q.front();
               if(temp->left)
               {
                   q.push(temp->left);

               }
               if(temp->right)
               q.push(temp->right);
               a.push_back(temp->val);
               q.pop();
            }
           v.push_back(a);
        }
          return v;
    }
};
