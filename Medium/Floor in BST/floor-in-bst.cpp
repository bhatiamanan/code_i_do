//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

struct Node {
    int data;
    Node *right;
    Node *left;

    Node(int x) {
        data = x;
        right = NULL;
        left = NULL;
    }
};


// } Driver Code Ends
// Function to search a node in BST.
class Solution{

public:

    void preOrder(Node* root, int x, int& floorNum){
        if(root==NULL) return;
        if(root->data < x){
            floorNum = max(floorNum,root->data);
            preOrder(root->right, x, floorNum);
        }
        else if(root->data == x){
            floorNum = root->data;
            return;
        }else{
            preOrder(root->left, x, floorNum);
        }
        
    }
    int floor(Node* root, int x) {
        // Code here
        int floorNum = -1;
        preOrder(root, x, floorNum);
        return floorNum;
    }
};

//{ Driver Code Starts.

Node *insert(Node *tree, int val) {
    Node *temp = NULL;
    if (tree == NULL) return new Node(val);

    if (val < tree->data) {
        tree->left = insert(tree->left, val);
    } else if (val > tree->data) {
        tree->right = insert(tree->right, val);
    }

    return tree;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        Node *root = NULL;

        int N;
        cin >> N;
        for (int i = 0; i < N; i++) {
            int k;
            cin >> k;
            root = insert(root, k);
        }

        int s;
        cin >> s;
        Solution obj;
        cout << obj.floor(root, s) << "\n";
    }
}

// } Driver Code Ends