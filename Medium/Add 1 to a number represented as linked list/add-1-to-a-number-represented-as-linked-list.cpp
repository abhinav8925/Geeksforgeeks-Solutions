//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data%10; 
        node = node->next; 
    }  
    cout<<"\n";
} 


// } Driver Code Ends
//User function template for C++

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

class Solution
{
    public:
    void reverse(Node* &head){
    Node* curr=head;
    Node* prev=NULL;
    
    while(curr){
    Node* temp=curr->next;
    curr->next=prev;
    prev=curr;
    curr=temp;
    }
    head=prev;
}
    Node* addOne(Node *head) 
    {
        // Your Code here
        // return head of list after adding one
        if(head==NULL)
     return head;
        reverse(head);
        
        int carry=1;
        Node* temp=head;
        Node* prev=NULL;
        while(temp){
        if(carry!=0){
         int num=temp->data;
         num+=carry;
         int rem=num%10;
         carry=num/10;
         temp->data=rem;
         prev=temp;
         temp=temp->next;
        }
        else{
        prev=temp;
        temp=temp->next;
        }
        }
       
       if(carry==0){
       reverse(head);
       return head;
       }
       else{
        Node* newNode=new Node(carry);
        prev->next=newNode;
        reverse(head);
        return head;
       }
    }
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        
        Node* head = new Node( s[0]-'0' );
        Node* tail = head;
        for(int i=1; i<s.size(); i++)
        {
            tail->next = new Node( s[i]-'0' );
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head); 
    }
    return 0; 
} 

// } Driver Code Ends