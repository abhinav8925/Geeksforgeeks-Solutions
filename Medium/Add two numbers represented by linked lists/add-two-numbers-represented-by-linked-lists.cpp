//{ Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


// } Driver Code Ends




class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    struct Node* reverse(struct Node *head){
        
        struct Node *temp=NULL, *cur=head,*prev=NULL;
        
        while(cur){
            temp = cur->next;
            cur->next=prev;
            prev=cur;
            cur=temp;
        }
        
        return prev;
    }
     struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        first = reverse(first);
        second = reverse(second);
        int carry = 0, sum;
        struct Node* dummy = new Node(0);
        struct Node* temp = dummy;
        while(carry || first != NULL || second != NULL)
        {
            sum = 0;
            if(first != NULL)
            {
                sum += first -> data;
                first = first -> next;
            }
            if(second != NULL)
            {
                sum += second -> data;
                second = second -> next;
            }
            sum += carry;
            carry = sum / 10;
            temp -> next = new Node(sum % 10);
            temp = temp -> next;
        }
        dummy -> next = reverse(dummy -> next);
        return dummy -> next;
    }

};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}

// } Driver Code Ends