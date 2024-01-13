//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

/* Link list node */
struct Node {
	int data;
	struct Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};

/* Function to print linked list */
void printList(struct Node *head)
{
	struct Node *temp = head;
	while (temp != NULL)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
}




// } Driver Code Ends
//User function Template for C++

/*Link list node
struct Node {
	int data;
	struct Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};*/

class Solution
{
    public:
    Node* insertionSort(struct Node* head)
    {
        //code here
        Node *ans = new Node(head->data);
        Node *cur = head->next;
        
        while(cur!=NULL){
            
            Node *prev = nullptr;
            Node *nxt = cur->next;
            Node *temp = ans;
            
            while(temp!=NULL && temp->data < cur->data){
                prev = temp;
                temp = temp->next;
            }
            
            if(prev == nullptr){
                cur->next = temp;
                ans = cur;
            }
            else if(prev->next == nullptr){
                prev->next = cur;
                cur->next=NULL;
            }
            else{
                prev->next = cur;
                cur->next = temp;
            }
            
            cur = nxt;
            
        }
        
        return ans;
    }
    
};

//{ Driver Code Starts.
int main()
{
	int T;
	cin >> T;

	while (T--)
	{
		int n;
		cin >> n;

		Node *head = NULL;
		Node *temp = head;

		for (int i = 0; i < n; i++) {
			int data;
			cin >> data;
			if (head == NULL)
				head = temp = new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}

        Solution ob;

		head = ob.insertionSort(head);
		printList(head);

		cout << "\n";



	}
	return 0;
}
// } Driver Code Ends