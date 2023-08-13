//User function Template for C++

/*

class Node{
public:
    int val;
    Node *next;
    Node(int num){
        val=num;
        next=NULL;
    }
};

*/

class Solution{
public:
    bool isprime(int n){
        if(n<=1)
            return false;
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0)
                return false;
        }
        return true;
    }
    int checkp(int n,int m){

        while(1){
            if(isprime(n))
                return n;
            n--;
            if(isprime(m))
                return m;
            
            m++;
                    
        }
        
    }
    Node *primeList(Node *head){
        
        Node *first=head;
        while(head!=NULL){
            int k=head->val;
            
            if(!isprime(k)){
                
                head->val=checkp(k,k);
                
            }
            head=head->next;
            
        }
        
        return first;
    }
};
