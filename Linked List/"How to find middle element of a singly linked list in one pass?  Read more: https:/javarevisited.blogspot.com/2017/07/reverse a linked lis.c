Node* reverse(Node *head)
{
 struct Node* prev=NULL;
 struct Node*  cur=head;
 struct Node* nex=NULL;
 while(cur!=NULL){
     nex=cur->next;
     cur->next=prev;
     prev=cur;
     cur=nex;
 }
 head=prev;
}
