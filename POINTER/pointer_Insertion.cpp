#include<iostream>

using namespace std;

int main(){

int arr[]={1,2,3,4,5,6,7,8};

int size= sizeof(arr)/sizeof(arr[0]);

int *ptr=arr;
int position,value;

cout<<"Enter a position: ";
cin>>position;

cout<<"Enter a value: ";
cin>>value;

size=size+1;



for(int i=size-1;i>position;i--){

    *(ptr+i) = *(ptr+size-1);
    cout<<*(ptr+i)<<endl;
    //  cout<<*(ptr+i)<<endl;
    ++ptr;
    

}

// ptr=0;







// for(int i=0;i<size;i++){
//     cout<<arr[i]<<endl;
// }





}