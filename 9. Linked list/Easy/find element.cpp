int search(node* head , int target){
	int i = 0;
	for(node* temp = head ; temp!=NULL ; temp = temp->next){
		if(temp->data == target){
			return i;
		}
		i++;
	}
	return -1;
}