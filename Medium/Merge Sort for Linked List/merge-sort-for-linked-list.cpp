//{ Driver Code Starts
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
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
/* Structure of the linked list node is as
struct Node 
{
    int data;
    struct Node* next;
    Node(int x) { data = x;  next = NULL; }
};
*/


class Solution{
  public:
    //Function to sort the given linked list using Merge Sort.
    
    Node* merge(Node* &first, Node* &second){
        
        Node* ans = NULL;
        
        if(!first)  
            return second;
        
        if(!second)
            return first;
        
        if(first->data<=second->data){
            ans = first;
            ans->next = merge(first->next,second);
        }
        else{
            ans=second;
            ans->next = merge(first,second->next);
        }
        
        return ans;
    }
    
    Node *findmid(Node *head){
        
        Node *s=head,*f=head->next;
        
        while(f && f->next){
            s= s->next;
            f=f->next->next;
        }
        
        return s;
    }
    Node* mergeSort(Node* head) {
        // your code here
        
        
        if(!head || !head->next)
            return head;
        
        Node *mid  = findmid(head);
        
        Node *left = head;
        Node *right = mid->next;
        mid->next=NULL;
        
        left = mergeSort(left);
        right = mergeSort(right);
        
        
        Node *res = merge(left,right);
        
        return res;
    }
};


//{ Driver Code Starts.

void printList(Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

void push(struct Node** head_ref, int new_data) {
    Node* new_node = new Node(new_data);

    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

int main() {
    long test;
    cin >> test;
    while (test--) {
        struct Node* a = NULL;
        long n, tmp;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            push(&a, tmp);
        }
        Solution obj;
        a = obj.mergeSort(a);
        printList(a);
    }
    return 0;
}
// } Driver Code Ends