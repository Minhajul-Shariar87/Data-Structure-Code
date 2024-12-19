#include<iostream>
#include<stdlib.h>

using namespace std;
struct node{
    int data;
    node*next;
};
node *head=NULL;
void insert_firstData(int new_data){
    node *cur =new node();
    cur->data=new_data;

    cur->next=head;


    head=cur;



}
void insert_last(int new_data){
    node *curr=new node();
    curr->data=new_data;
    curr->next=NULL;
    node *prevNode=head;

    while(prevNode->next!=NULL){
        prevNode=prevNode->next;
    }
    prevNode->next=curr;
}

void insert_middle(int new_data, int ref_value){
   node *curr=new node();
    curr->data=new_data;
    curr->next=NULL;


    node * refNode= head;

    while(refNode!=NULL&&refNode->data!=ref_value){
        refNode=refNode->next;
    }
    if(refNode!=NULL){
    curr->next=refNode->next;
    refNode->next=curr;
    }else{
        cout<<ref_value<<" Not Found";
    }
}
void display(){
    node*curr=head;


    while(curr!=NULL){
        cout<<curr->data<<"-->";
        curr=curr->next;


    }

}

void delete_first(){
node *curr=head;
if(head==NULL){
    cout<<"It is an empty list"<<endl;
}else{head=head->next;
free(curr);
}
}

int main(){
insert_firstData(20);
cout<<"Linked List after first insertion: "<<endl;
display();

insert_firstData(10);
cout<<"Linked List after first insertion: "<<endl;
display();

insert_last(70);
cout<<"Linked List last data insertion: "<<endl;
display();

insert_firstData(80);
cout<<"Linked List first data insertion: "<<endl;
display();

insert_firstData(90);
cout<<"Linked List first data insertion: "<<endl;
display();

insert_last(100);
cout<<"Linked List last data insertion: "<<endl;
display();

insert_middle(110,70);
cout<<"Linked List last data insertion: "<<endl;
display();

insert_middle(1000,20);
cout<<"Linked List last data insertion: "<<endl;
display();

insert_middle(1000,10);
cout<<"Linked List last data insertion: "<<endl;
display();

insert_middle(1200,10000);
cout<<"Linked List last data insertion: "<<endl;
display();

insert_middle(2000,10);
cout<<"Linked List last data insertion: "<<endl;
display();



delete_first();
cout<<"Delete First: "<<endl;
display();
}
