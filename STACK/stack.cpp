#include<iostream>

using namespace std;

class MyStack{
    private:
    
    int top;
    int maxSize;
    int newStack[100];

    public:
    MyStack(int size){
        maxSize=size;
        top=0;
        cout<<"Stak Size: "<<maxSize<<endl;
        cout<<"Current top: "<<top<<endl;
    }
// Check Empty
    bool isEmpty(){
        if(top==0){
            return 1;
        }
        else{
            return 0;
        }


    }
// Checking Full
    bool isFull(){
        if(top==maxSize){
            return 1;
        }else{return 0;}
    }

  
//insert element to stack
void push(int element){
if(isFull()){
    cout<<"Stack is Full"<<endl;
}else{
    

   
    
newStack[top]=element;
    ++top;


   
   
    
  
        
    
    
}
}
void pop(){
    if(isEmpty()){
        cout<<"Stack is Empty. No Deletion Possible"<<endl;
    }else{
        cout<<"Current popped elemnt: "<<newStack[top-1]<<endl;
        --top;
    }
}

void show(){
if(isEmpty()){
    cout<<"Stack has no element"<<endl;
}
else{
    for(int i=top-1;i>=0;i--){
        cout<<newStack[i]<<endl;
    }
}
}

};

int main(){

MyStack s(5);
s.push(10);
s.push(20);
s.push(30);
s.push(20);
s.push(50);
s.push(60);

s.show();

s.pop();
s.pop();
s.pop();
s.pop();
s.pop();
s.pop();

s.show();
// s.pop();
// s.show();
return 0;


}