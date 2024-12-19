#include<bits/stdc++.h>

using namespace std;

struct node{
    char data;
    node *next;
};
node *head= NULL;

void first_insert_character(char vowel){
node *cur = new node();
cur->data=vowel;
cur->next=head;
head=cur;
}

void display(){
    node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;

    }

}
void check_vowel(){
    node *curr=head;
    
    while(curr!=NULL){
        if(curr->data=='a'||curr->data=='e'||curr->data =='i'||curr->data=='o'||curr->data == 'u'){
            cout<<"Vowel is: "<<curr->data<<endl;
            
        }
        curr=curr->next;
    }
}

int main(){
    int n;
    cout<<"Enter a number of times: ";
    cin>>n;
 char x;
    for(int i=1;i<=n;i++){
       
        cout<<"Enter a value: ";
        cin>>x;
        first_insert_character(x);
        
    }
    check_vowel();
}