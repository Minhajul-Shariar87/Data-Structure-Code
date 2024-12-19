#include<iostream>

using namespace std;

int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    int s;
    cout<<"Enter a number to search: ";
    cin>>s;
    int size=sizeof(arr)/sizeof(arr[0]);
    int index;
    int position=-1;
    int f_index=0;
    int l_index=size-1;
    int mid_index;

    while(f_index<=l_index){
     mid_index=(f_index+l_index)/2;
     if(arr[mid_index]==s){
       position=mid_index;
       break; 
     }
     else if(s>arr[mid_index]){
        f_index=mid_index+1;
     }
     else if(s<arr[mid_index]){
        l_index=mid_index-1;
     }
    

    }
    if(position>-1){
        cout<<position<<endl;
    }
}