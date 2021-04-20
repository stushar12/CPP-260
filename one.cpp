Node* reverseDLL(Node * head)
{
Node *curr = head, *prev = NULL, *nextnode=NULL;
while(curr != NULL)
{
nextnode = curr->next;
curr->next = prev;
curr->prev = nextnode;
prev = curr;
curr = nextnode;
}
return prev;
}