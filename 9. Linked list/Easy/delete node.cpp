Node* deleteNode(Node *head,int pos)
{
    //Your code here
    if(head==NULL)
	return head;
if(pos==1){
	Node* temp = head->next;
	delete head;
	return temp;
}
Node* temp = head;
int i = 1;
while(temp->next!=NULL and i<pos-1){
	temp = temp->next;
	i++;
}
if(temp->next == NULL)
	return head;
Node* to_delete = temp->next;
temp->next = to_delete->next;
delete to_delete;
return head;
}