Node* deleteNode(Node *head, int x)
    {
      //Your code here
      	if(head==NULL)
		return head;
	if(x==1){
		Node* temp = head->next;
		temp->prev = NULL;
		delete head;
		return temp;
	}
	Node* temp = head;
	int i = 1; 
	while(i<x){
		temp = temp->next;
		i++;
	}
    temp->prev->next = temp->next;
    if(temp->next!=NULL)
    temp->next->prev = temp->prev;
    delete temp;
    return head;
    }