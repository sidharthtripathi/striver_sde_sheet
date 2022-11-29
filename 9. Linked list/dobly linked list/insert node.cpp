void addNode(Node *head, int p, int x)
{
   // Your code here
       int pos = 0;
    Node* temp = head;
    while(pos<p){
        temp = temp->next;
        pos++;
    }
    Node* newnode = new Node(x);
    newnode->prev = temp;
    newnode->next = temp->next;
    temp->next = newnode;
}