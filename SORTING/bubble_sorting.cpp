#include<iostream>

using namespace std;
void print_array(int narr[],int size){
for(int i=0;i<size;i++){
    cout<<narr[i]<<" ";
    
}
cout<<endl;
}
int main(){
   int arr[]= { 62,43,76,45,34,90,66 };
   int size1= sizeof(arr)/sizeof(arr[0]);
   //////////////////PRINTING UNSORTED ARRAY///////////////////////////////////////////////////////////
   cout<<"Unsorted Array"<<endl;
   print_array(arr,size1); 
   ////////////////////SORTING////////////////////////////////////////////////////////////////////////////////
   for(int pass=0;pass<size1-1;pass++){
    for(int i=0;i<size1-pass-1;i++){
        if(arr[i]>arr[i+1]){
            //FOR DESCENDING USE arr[i]<arr[i+1]//
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
   }
 cout<<"Sorting Array"<<endl;
 print_array(arr,size1);
}