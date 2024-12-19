#include<iostream>

using namespace std;

struct node{
    int data;
    struct  node* left;
    struct node* right;
};

struct node* new_node(int new_data){

   node   *new_node= new node();
   new_node->data=new_data;
   new_node->left=NULL;
   new_node->right=NULL;

};
struct node* bst_insert(struct node* root,int key){
   
if(root==NULL){
   

    return new_node(key);
    
}
else if(key < root->data){
    
    root->left=bst_insert(root->left,key);
    
}
else if(key > root->data){
    root->right= bst_insert(root->right,key);
  
}


};

void preorder_traverse(struct node *temp){
    if(temp!=NULL){
        cout<<temp->data<<"\t";
        preorder_traverse(temp->left);
        
        preorder_traverse(temp->right);
    }

    
}

int main(){
    struct node *root= NULL;
    root= bst_insert(root,22);
   
    bst_insert(root,11);
    
    bst_insert(root,15);
    
    bst_insert(root,45);

    

     
    bst_insert(root,70);
    bst_insert(root,47);
    bst_insert(root,9);
    bst_insert(root,5);
    bst_insert(root,34);
    bst_insert(root,94);

    cout<<"\n Preorder Traversal: ";
    preorder_traverse(root);
    
}