

/* Node structure  used in the program

struct Node{
	int data;
	struct Node * next;
	struct Node * bottom;
	
	Node(int x){
	    data = x;
	    next = NULL;
	    bottom = NULL;
	}
	
};
*/

/*  Function which returns the  root of 
    the flattened linked list. */
Node *flatten(Node *root)
{
  vector<int>v;
  Node* temp=root;
  Node* curr=NULL;
  while(temp){
          curr=temp;

          while(curr!=NULL){

             v.push_back(curr->data);

            curr=curr->bottom;  

          }
      temp=temp->next;

  }
  sort(v.begin(),v.end());

    Node* head2=new Node(v[0]);

    temp=head2;

    

    for(int i=1;i<v.size();i++){

        Node* n=new Node(v[i]);

        head2->bottom=n;

        head2=head2->bottom;

    }

return temp;
}
