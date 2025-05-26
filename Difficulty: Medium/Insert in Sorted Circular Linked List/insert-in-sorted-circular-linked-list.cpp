/* structure for a node
class Node {
 public:
  int data;
  Node *next;

  Node(int x){
      data = x;
      next = NULL;
  }
}; */

class Solution {
  public:
    Node* sortedInsert(Node* head, int data) {
        // code here
        Node *temp = head;
        Node *prev = NULL;
        
        Node *nodeToAdd = new Node(data);
        
        if(temp->data>=data){
            nodeToAdd->next = temp;
            while(temp->next!=head){
                temp=temp->next;
            }
            temp->next = nodeToAdd;
            return nodeToAdd;
        }else{
            prev = temp;
            temp=temp->next;
        }
    
        while(temp!=head){
            if(temp->data>=data){
                prev->next = nodeToAdd;
                nodeToAdd->next = temp;
                return head;
            }else{
                prev = temp;
                temp=temp->next;
            }
        }
        nodeToAdd->next = temp;
        prev->next = nodeToAdd;
        return head;
    }
};