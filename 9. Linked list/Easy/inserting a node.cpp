class Solution{
  public:
    //Function to insert a node at the beginning of the linked list.
    Node *insertAtBegining(Node *head, int data) {
       // Your code here
    Node* newnode = new Node(data);
	newnode->next = head;
	return newnode;
    }
    
    
    //Function to insert a node at the end of the linked list.
    Node *insertAtEnd(Node *head, int data)  {
       // Your code 
       	Node* newnode = new Node(data);
	if(head==NULL){
		head = newnode;
		return newnode;
	}
	Node* temp = head;
	while(temp->next != NULL){
		temp = temp->next;
	}
	temp->next = newnode;
	return head;
    }
};