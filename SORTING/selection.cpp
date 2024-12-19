#include<iostream>

using namespace std;

int main(){
    int arr[]={10,40,50,2,3};
    int c;
    int size= sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size-1;i++){
        
        int min=arr[i];
        int minindex=i;
        for(int j=i+1;j<size;j++){
            
           if(min>arr[j]){
             min=arr[j];
             minindex=j;
            
             
             
             
           } 
           
           
        }
        arr[minindex]=arr[i];
           arr[i]=min;
    }
    for(int i=0;i<size;i++){
         cout<<arr[i]<<"\t";
    }
}