/* a Node of the doubly linked list
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
}; */

class Solution {
  public:
    void deleteAllOccurOfX(struct Node** head_ref, int x) {
        // code here
        Node* temp = *head_ref;
        while(temp != NULL){
            if(temp->data == x){
                Node* nextNode = temp -> next;
                Node* prevNode = temp -> prev;
                
                if(temp == *head_ref){
                    *head_ref = temp -> next;
            }
            
           
            if(nextNode != NULL) nextNode->prev = prevNode;
            if(prevNode != NULL) prevNode->next = nextNode;
            
            delete(temp);
            temp = nextNode;
        }
        else {
            temp = temp->next;
        }
    }
  }
};