#include<iostream>

using namespace std;

int main(){

    int arr[]={1,4,5,3,6,9,11,12};
    int c=0;
    int size= sizeof(arr)/sizeof(arr[0]);
    int arr_2[size];
    for(int i=0;i<size;i++){
        bool flag=false;
        for(int j=0;j<size;j++){
            if(arr[i]!=arr[j]){
             for(int k=0;k<=c;k++){
                if(arr[i]==arr_2[k]){
                    flag=true;
                    
                }
               


             } 
             if(!flag){
               
                arr_2[c]=arr[i];
                
                c++;
                
                
                
             } 
             break; 
             
            }
        }
    }
cout<<endl;
 if(c==0){
    cout<<"No Unique Number Found"<<endl;
 }
 else if(c>0)
{
    cout<<"Unique Number Found"<<endl;
}


for(int i=0;i<c;i++){
    cout<<arr_2[i]<<" ";
}

}