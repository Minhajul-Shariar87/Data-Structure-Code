#include<iostream>

using namespace std;
void print_array(int narr[],int size){
for(int i=0;i<size;i++){
    cout<<narr[i]<<" ";

}
cout<<endl;
}
int main(){
   int arr[]= { 6,4,1,8,5 };
   int size1= sizeof(arr)/sizeof(arr[0]);
   //////////////////PRINTING UNSORTED ARRAY///////////////////////////////////////////////////////////
   cout<<"Unsorted Array"<<endl;
   print_array(arr,size1);

   int key;

  for(int j=1;j<size1;j++){
    key=arr[j];
    int i;
    for( i=j-1;i>=0;i--){
        if(arr[i]>key){
            
            arr[i+1]=arr[i];
            cout<<arr[i+1]<<" ";
        }
        else{
            break;
        }

    }
    cout<<endl;

    cout<<"i normal is:"<<i<<endl;
    // cout<<"i is:"<<(i+1)<<endl;
   
    arr[i+1]=key;
    // cout<<arr[i+1]<<" ";
    cout<<endl;

  }
  cout<<"Sorted Array "<<endl;
  print_array(arr,size1);
}
