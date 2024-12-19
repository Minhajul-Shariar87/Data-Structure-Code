#include<iostream>

using namespace std;

int main(){
    int arr[]={1,2,3,4,5,6};

 int *ptr=arr;



 int r;

 cout<<"Enter a number to remove: ";
 cin>>r;



 for(int i=r;i<6-1;i++){
  
    *(ptr+r)=*(ptr+r+1);
    
  ++ptr;

 
   
 
 }

 
 
 for(int i=0;i<6-1;i++){
    cout<<arr[i]<<endl;
    

 }
 


 


  

 
}