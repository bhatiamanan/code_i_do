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
  
    void inOrder(Node *root, int &sum, int &maxSum, int &height, int &maxHeight){
        if(!root) return;
        
        sum+=root->data;
        height++;
        
        if(!root->left && !root->right){
            if(height>maxHeight){
                maxHeight = height;
                maxSum = sum;
            }else if(height==maxHeight){
                maxSum = max(sum,maxSum);
            }
            sum-=root->data;
            height--;
            return;
        }
        
        inOrder(root->left, sum, maxSum, height, maxHeight);
        inOrder(root->right, sum, maxSum, height, maxHeight);
        
        sum -= root->data;
        height--;
    }
    
    int sumOfLongRootToLeafPath(Node *root) {
        // code here
        int sum = 0;
        int maxSum = INT_MIN;
        int height = 0;
        int maxHeight = INT_MIN;
        inOrder(root, sum, maxSum, height, maxHeight);
        return maxSum;
    }
};