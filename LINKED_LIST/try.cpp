#include<iostream>

using namespace std;
struct node{
    int data;
    node *next;
};
node *head=NULL;
void insert_first_data(int new_data){
    node *curr= new node();
    curr->data=new_data;
    curr->next=head;
    head=curr;

}
void last_insertion(int new_data){
    // node *curr2=head;
    node *curr= new node();
    curr->data=new_data;
    curr->next=NULL;

    node *prevnode=head;


    while(prevnode->next!=NULL){
        prevnode=prevnode->next;
    }
    prevnode->next=curr;
    


}
void middle_insertion(int new_data,int ref_data){
    node *curr= new node();
    curr->data=new_data;
    curr->next=NULL;
    

    node *refnode=head;
    while(refnode!=NULL&&refnode->data!=ref_data){
        refnode=refnode->next;
    }
    if(refnode!=NULL){
    curr->next=refnode->next;
    refnode->next=curr;
    }

}
void delete_first(){

    if(head!=NULL){
    
    head=head->next;
    }
}
void delete_mid(int remove_data,int ref_data){
    node *refnode=head;
   
    while(refnode!=NULL && refnode->data!=ref_data){
        refnode=refnode->next;
    }
    
    node *datanode=head;

    while(datanode!=NULL && datanode->data!=remove_data){
        datanode=datanode->next;
    }
    if(refnode!=NULL&&datanode!=NULL&&refnode->data==ref_data&&datanode->data==remove_data){
    refnode->next=datanode->next;
    }

}

void delete_last(){
    node *last=head;
    

    while(last->next->next!=NULL){
        last=last->next;
        
    }
    last->next=NULL;
    

}
void display(){
    node *curr = head;
    while(curr!=NULL){
        cout<<curr->data<<"-->";
        curr=curr->next;
    }
   cout<<endl; 
}
int main(){
insert_first_data(20);
display();

insert_first_data(10);
display();

insert_first_data(50);
display();

insert_first_data(600);
display();

insert_first_data(70);
display();

last_insertion(30);
display();

middle_insertion(60,10);
display();

middle_insertion(600,50);
display();

middle_insertion(60000,5000);
display();

middle_insertion(6000,50);
display();

delete_first();
display();

delete_mid(20,60);
display();

delete_mid(20,6000);
display();

middle_insertion(6000,50);
display();

delete_first();
display();

delete_last();
display();

middle_insertion(600000,50);
display();

}