#include<iostream>

using namespace std;

int main(){
    int arr[6]={12,33,42,1,5,10};
    bool flag= false;
    int index=-1;
    int value=5;     
    
    
    int nlength= (sizeof(arr)/sizeof(arr[0]));
    cout<<nlength<<endl;
    for(int i=0;i<nlength;i++){
        if(arr[i]==value){
            index=i;
            flag=true;
           
        }
    }





}
