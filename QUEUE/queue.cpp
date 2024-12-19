#include<iostream>

using namespace std;

class Queue{
    private:
    
    int front;
    int rear;
    int maxSize;
    int newQueue[100];

    public:
    Queue(int size){
        maxSize=size;
        front=-1;
        rear=-1;
        cout<<"Queue Size: "<<maxSize<<endl;
        
    }
// Check Empty
    bool isEmpty(){
        if(front==-1&&rear==-1){
            return 1;
        }
       else if(front==rear){
        front=-1;
        rear=-1;
       }
        else{
            return 0;
        }


    }
// Checking Full
    bool isFull(){
        if(rear==maxSize-1){
            return 1;
        }
        else{return 0;}
    }

  
//insert element to stack
void push(int element){
if(isFull()){
    cout<<"Queue is Full"<<endl;
} 
else{
   
   
  
newQueue[rear+1]=element;
    ++rear;


    
   
   
    
  
        
    
    
}
}
void pop(){
    if(isEmpty()){
        cout<<"Queue is Empty. No Deletion Possible"<<endl;
    }
 
     
    else{
        
        cout<<"Current popped elemnt: "<<newQueue[front+1]<<endl;
        ++front;
       
      
    
}
}
void show(){
if(isEmpty()){
    cout<<"Stack has no element"<<endl;
}
else{
    for(int i=front;i<=rear;i++){
        cout<<newQueue[i]<<endl;
    }
}
}

};

int main(){

Queue s(5);
s.push(10);
s.push(20);
s.push(30);
s.push(40);
s.push(50);
s.push(60);
s.push(70);

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