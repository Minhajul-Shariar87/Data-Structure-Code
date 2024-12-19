#include<iostream>

using namespace std;

int main(){
    int arr[]= {1,2,3,5,7,9,11};
    int size1= sizeof(arr)/sizeof(arr[0]);
    int item;
    int first_element= 0;
    int last_element=size1-1;
    int mid_index;
    int position=-1;

    cout<<"Enter a number: ";
    cin>>item;

    while(first_element<=last_element){
     mid_index=(first_element+last_element)/2;
     if(item<arr[mid_index]){
        last_element=mid_index-1;
     }
     else if(item>arr[mid_index]){
        first_element=mid_index+1;
     }
     else{
       position=mid_index; 
       break;
     }
    }
    
    if(position==-1){
        cout<<"Value Not Found"<<endl;
    }
    else {
        cout<<"Index is: "<<position<<endl;
    }
    
}