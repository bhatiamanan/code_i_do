/*
class Node {
  public:
    int data;
    Node *left;
    Node *right;

    Node(int x) {
        data = x;
        left = NULL;
        right = NULL;
    }
}; */

class Solution {
  public:
    void helper(Node* root, int k , int &ans){
        if(!root) return;
        
        if(root->data>k){
            helper(root->left, k, ans);
        }else if(root->data<k){
            if(root->data>ans) ans = root->data;
            helper(root->right, k, ans);
        }else{
            ans = root->data;
            return;
        }
    }
    
    int findMaxFork(Node* root, int k) {
        // code here
        int ans = -1;
        helper(root, k, ans);
        return ans;
        
    }
};