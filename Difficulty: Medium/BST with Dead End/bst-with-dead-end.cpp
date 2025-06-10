/*The Node structure is
class Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x){
        data = x;
        left = NULL;
        right = NULL;
    }
};*/

class Solution {
  public:
  
    bool helper(Node *root, int min, int max) {
        if(!root){
            return 0;
        }
        
        if(!root->left && !root->right){
            if(root->data-min == 1 && max-root->data == 1) return 1;
            return 0;
        }
        
        return (helper(root->left, min, root->data) 
        || helper(root->right, root->data, max));
    }
    
    bool isDeadEnd(Node *root) {
        // Code here
        
        return helper(root, 0, INT_MAX);
    }
};