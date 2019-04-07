#include <bits/stdc++.h> 
using namespace std; 
  
struct Node { 
  int data; 
  struct Node *left; 
  struct Node *right; 
}; 
  
/* Helper function that allocates a new Node with the 
   given data and NULL left and right pointers. */
struct Node *newNode(int data) { 
  struct Node *node = new Node; 
  node->data = data; 
  node->left = NULL; 
  node->right = NULL; 
  return (node); 
} 
  
// function to find three largest element 
void threelargest(Node *root, int &first, int &second,  
                                          int &third) { 
  if(root==NULL)
  return;
 
        if(root->data>first){
            third=second;
            second=first;
            first=root->data;
            
        }
        else if(root->data<first && root->data>second){
            third=second;
            second=root->data;
        }
        else if(root->data<second && root->data>third){
            third=root->data;
        }
       threelargest(root->left,  first,second,third);
        threelargest(root->right,  first,second,third);
    
} 
  
// driver function 
int main() { 
  struct Node *root = newNode(1); 
  root->left = newNode(2); 
  root->right = newNode(3); 
  root->left->left = newNode(4); 
  root->left->right = newNode(5); 
  root->right->left = newNode(4); 
  root->right->right = newNode(5); 
  
  int first = 0, second = 0, third = 0; 
  threelargest(root, first, second, third); 
  cout << "three largest elements are " 
       << first << " " << second << " "
       << third; 
  return 0; 
} 
