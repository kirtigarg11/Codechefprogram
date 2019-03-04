#include <stdio.h> 
#include <stdlib.h> 
#include<iostream>
using namespace std;
/* a node of the singly linked list */
struct Node 
{ 
    int data; 
    struct Node *next; 
}; 
  
// Function to segregate even and odd nodes. 
void segregateEvenOdd(struct Node **head_ref) 
{ 
    // Starting node of list having  
    // even values. 
    Node *evenStart = NULL; 
      
    // Ending node of even values list. 
    Node *evenEnd = NULL; 
      
    // Starting node of odd values list. 
    Node *oddStart = NULL; 
      
    // Ending node of odd values list. 
    Node *oddEnd = NULL; 
      
    // Node to traverse the list. 
    Node *currNode = *head_ref; 
      
    while(currNode != NULL){ 
        int val = currNode -> data; 
          
        // If current value is even, add 
        // it to even values list. 
        if(val % 2 == 0) { 
            if(evenStart == NULL){ 
                evenStart = currNode; 
                evenEnd = evenStart; 
            } 
              
            else{ 
                evenEnd -> next = currNode; 
                evenEnd = evenEnd -> next; 
            } 
        }  
          
        // If current value is odd, add  
        // it to odd values list. 
        else{ 
            if(oddStart == NULL){ 
                oddStart = currNode; 
                oddEnd = oddStart; 
            } 
            else{ 
                oddEnd -> next = currNode; 
                oddEnd = oddEnd -> next; 
            } 
        } 
                      
        // Move head pointer one step in  
        // forward direction 
        currNode = currNode -> next;     
    } 
      
    // If either odd list or even list is empty, 
    // no change is required as all elements  
    // are either even or odd. 
    if(oddStart == NULL || evenStart == NULL){ 
        return; 
    } 
      
    // Add odd list after even list.      
    evenEnd -> next = oddStart; 
    oddEnd -> next = NULL; 
      
    // Modify head pointer to  
    // starting of even list. 
    *head_ref = evenStart; 
} 
  
/* UTILITY FUNCTIONS */
/* Function to insert a node at the beginning */
void push(struct Node** head, int new_data) 
{ 
    /* allocate node */
       struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=new_data;
    temp->next=NULL;
    if((*head)==NULL){
        
        (*head)=temp;
        return;
    }
    struct Node* temp1;
    temp1=(*head);
    while(temp1->next!=NULL){
        temp1=temp1->next;
    }
    temp1->next=temp;
} 
  
/* Function to print nodes in a given linked list */
void printList(struct Node *node) 
{ 
    while (node!=NULL) 
    { 
        printf("%d ", node->data); 
        node = node->next; 
    } 
    printf("\n");
} 
  
/* Drier program to test above functions*/
int main() 
{ 
    /* Start with the empty list */
    	int t;
	cin>>t;

	for(int i=0;i<t;i++){
	     struct Node* head = NULL;
	    int n;
	    cin>>n;
	    int a;
	    for(int i=0;i<n;i++){
	        cin>>a;
	        push(&head,a);
	    }
    
  
    /* Let us create a sample linked list as following 
    0->1->4->6->9->10->11 */
  
   
  
  
    
  
    segregateEvenOdd(&head); 
  
    
    printList(head); 
  }
    return 0; 
} 
