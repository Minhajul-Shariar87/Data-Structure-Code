#include<iostream>

using namespace std;

int main(){
    int arr[]={4,2,9,1,6,3};
    int size1= sizeof(arr)/sizeof(arr[0]);
    int index=-1;
    int key;
    cout<<"Enter a number to find: ";
    cin>>key;
    
    for(int i=0;i<size1;i++){
       if(key==arr[i]){
        index=i;
     
       } 
        
    }
    if(index!=-1){
    cout<<"Index is: "<<index<<endl;
}else if(index==-1){
    cout<<"Index Not Found"<<endl;
}
}
