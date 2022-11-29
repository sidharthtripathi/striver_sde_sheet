class Solution
{
    public:
    //Function to count nodes of a linked list.
    int getCount(struct Node* head){
    
        //Code here
    	if(head == NULL)
		return 0;
	int i = 0;
	Node* temp = head;
	while(temp!=NULL){
		temp = temp->next;
		i++;
	}
	return i;
    }
};