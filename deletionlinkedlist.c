/*Delete xth node from a single linked list. Your task is to complete the method deleteNode which takes two arguments:
the address of the head of the linked list and an integer x. The function returns the head of the  modified linked list.*/

Node* deleteNode(Node *head,int x)
{
    int count = 1;
    struct Node *main = head;
    
    if(x==1){
        head = main->next;
        free(main);
        return head;}
        
    int i=1;
    while(main!=NULL && i<x-1){
        main=main->next;
        i++;
    }
    if(main==NULL || main->next==NULL)
        return head;
    struct Node *temp = main->next->next;
    free(main->next);
    main->next = temp;
    return head;
}
