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
        vector<int> v;
        Node *p=head;
        int count0=0;
        int count1=0;
        int count2=0;
        while(p){
            if(p->data==0)
            count0++;
            if(p->data==1)
            count1++;
            if(p->data==2)
            count2++;
            
            p=p->next;
        }
        p=head;
        while(count0--){
            p->data=0;
            p=p->next;
        }
        while(count1--){
            p->data=1;
            p=p->next;
        }
        while(count2--){
            p->data=2;
            p=p->next;
        }
        return head;
    }
};
