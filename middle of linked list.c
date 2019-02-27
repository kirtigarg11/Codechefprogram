int getMiddle(Node *head)
{
  struct Node *middle;
  struct Node* temp;
  middle=head;
  temp=head;
  int c=0;
  while(temp!=NULL){
      if(c & 1){
          middle=middle->next;
      }
      c++;
      temp=temp->next;
  }
  if(middle!=NULL)
    return middle->data;
}
