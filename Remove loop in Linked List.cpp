
/*
structure of linked list node:

struct Node
{
    int data;
    Node* next;
    
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        // code here
        // just remove the loop without losing any nodes
        // In brute force use a map to check if a node is present , if yes then set its next to NULL and return;
        // use pre=head, and cur=head->next
        Node *fast=head,*slow=head;
        
        while(fast && fast->next){
            fast=fast->next->next;
            slow=slow->next;
            if(fast==slow){
                break;
            }
        }
        if(slow==head){
            while(fast->next!=slow){
                fast=fast->next;
            }
            fast->next=NULL;
            return;
        }
        else if(slow==fast){
        slow=head;
        while(fast->next!=slow->next){
            slow=slow->next;
            fast=fast->next;
        }
        fast->next=NULL;
        return;
        } 
    }
};
