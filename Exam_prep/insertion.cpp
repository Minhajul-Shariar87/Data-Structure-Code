#include<iostream>

using namespace std;
void print_array(int array[],int size){
for(int i=0;i<size;i++){
    cout<<array[i]<<" ";
}
cout<<endl;
}

int main(){
    int arr[]={2,4,1,8,5};
    int size= sizeof(arr)/sizeof(arr[0]);

    print_array(arr,size);

    int key;

    for(int j=1;j<size;j++){
        key=arr[j];
        int i;
        for( i=j-1;i>=0;i--){
            if(arr[i]>key){
                arr[i+1]=arr[i];
            }
            else{
                break;
            }
        }
        arr[i+1]=key;
    }
    print_array(arr,size);
}