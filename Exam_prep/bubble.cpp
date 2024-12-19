#include<iostream>

using  namespace std;
void print_info(int array[],int size){
    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[]={-2,0,11,-9,45};

    int size= sizeof(arr)/sizeof(arr[0]);

print_info(arr,size);

    for(int i=0;i<size;i++){
       
        
        for(int j=0;j<size-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }

        }
    }
    print_info(arr,size);
}