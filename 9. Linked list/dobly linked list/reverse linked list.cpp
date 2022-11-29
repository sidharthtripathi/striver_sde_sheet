Node* reverseDLL(Node * head)
{
    //Your code here
    	if(head == NULL or head->next == NULL)
		return head;
Node* temp = head;
Node* prev = NULL;
while(temp != NULL){
	prev = temp->prev;
	temp->prev = temp->next;
	temp->next = prev;
	temp = temp->prev;
}
    return prev->prev;
}