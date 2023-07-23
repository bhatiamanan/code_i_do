//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
/* Link list Node */
struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node *start = NULL;


// } Driver Code Ends
/*
 
  Node is defined as
  struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
        // Add code here
        Node *temp=head;
        Node *temp0=head;
        // Node *temp1=head;
        // Node *temp2=head;
        
        int count0=0;
        int count1=0;
        int count2=0;
        
        while(temp!=NULL){
            
            if(temp->data==0){
                count0++;
                
            }
            else if(temp->data==1){
                count1++;
            }
            else/*(temp->data==2)*/ {
                count2++;
                
            }
            temp=temp->next; 
           
        }
        
        //placing 0 1 2 in ll
        
        while(count0!=0 && head!=NULL){
            head->data=0;
            head=head->next;
            count0--;
        }
        while(count1!=0 && head!=NULL){
            head->data=1;
            head=head->next;
            count1--;
        }
        while(count2!=0 && head!=NULL){
            head->data=2;
            head=head->next;
            count2--;
        }
        
        
        return temp0;
        
    }
};


//{ Driver Code Starts.

// Function to sort a linked list of 0s, 1s and 2s
void printList(struct Node *Node) {
    while (Node != NULL) {
        printf("%d ", Node->data);
        Node = Node->next;
    }
    printf("\n");
}

/* Drier program to test above function*/
void insert(int n1) {
    int n, value, i;
    // scanf("%d",&n);
    n = n1;
    struct Node *temp;
    for (i = 0; i < n; i++) {
        scanf("%d", &value);

        if (i == 0) {
            start = new Node(value);
            temp = start;
            continue;
        } else {
            temp->next = new Node(value);
            temp = temp->next;
            temp->next = NULL;
        }
    }
}

int main() {

    int n;

    int t;
    scanf("%d", &t);

    while (t--) {
        scanf("%d", &n);

        insert(n);
        Solution ob;
        struct Node *newHead = ob.segregate(start);
        printList(newHead);
    }

    return 0;
}
// } Driver Code Ends