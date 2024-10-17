//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};


// } Driver Code Ends
/*
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};
*/

class Solution {
  public:
    // Function to split a linked list into two lists alternately
    vector<Node*> alternatingSplitList(struct Node* head) {
        // Your code here
        if(!head->next) return {head, NULL};
        Node * sub1 = new Node(head->data); 
        Node * sub2 = new Node(head->next->data);
        
        Node * sub1Rep = sub1;
        Node * sub2Rep = sub2;
        
        Node * stratingPoint = head->next->next;
        
        bool addToSub1 = true;  // Toggle flag to alternate
        while (stratingPoint) {
            if (addToSub1) {
                sub1Rep->next = new Node(stratingPoint->data);
                sub1Rep = sub1Rep->next;
            } else {
                sub2Rep->next = new Node(stratingPoint->data);
                sub2Rep = sub2Rep->next;
            }
            addToSub1 = !addToSub1;  // Toggle between sub1 and sub2
            stratingPoint = stratingPoint->next;
        }

        return {sub1, sub2};
    }
};



//{ Driver Code Starts.

void printList(struct Node* node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;

        while (ss >> number) {
            arr.push_back(number);
        }

        struct Node* head = new Node(arr[0]);
        struct Node* tail = head;

        for (int i = 1; i < arr.size(); ++i) {
            tail->next = new Node(arr[i]);
            tail = tail->next;
        }

        Solution ob;
        vector<Node*> result = ob.alternatingSplitList(head);
        printList(result[0]);
        printList(result[1]);
    }

    return 0;
}

// } Driver Code Ends