#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *next;
};

node *head= NULL;

void first_insertion(int new_data){
    node *curr= new node();
    curr->data=new_data;
    curr->next=head;
    head=curr;
}

void odd_even_chceker(){
    node *cur= head;

    while(cur!=NULL){
        if(cur->data%2==0){
            cout<<"Even is: "<<cur->data<<endl;
        }else{
            cout<<"ODD is: "<<cur->data<<endl;
        }
        cur=cur->next;
    }
}

int main(){
 int n;
    cout<<"Enter a number of times: ";
    cin>>n;
 int x;
    for(int i=1;i<=n;i++){
       
        cout<<"Enter a value: ";
        cin>>x;
        first_insertion(x);
        
    }
    odd_even_chceker();
}