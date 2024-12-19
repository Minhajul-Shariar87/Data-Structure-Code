#include<iostream>

using namespace std;

/////////////////////// FORWARD DELETE ELEMENT////////////////////////////////////////////
void deletelement(int narr[],int nsize, int nvalue){
int index=-1;
int ncount=0;
for(int i=0;i<nsize;i++){
    if(narr[i]!=NULL){
        ncount++;
    }
}
    for(int i=0;i<ncount;i++){
        if(narr[i]==nvalue){
        index=i;
        break;

        }
    }
    
    if(index>=0){

    for(int i=index;i<ncount-1;i++){
    narr[i]=narr[i+1];


}
    
for(int i=0;i<ncount-1;i++){
    cout<<narr[i]<<"\t";
}



}
else{
   for(int i=0;i<ncount;i++){
    cout<<narr[i]<<endl;
} 
}
}





int main(){
    int size=10;
    int arr[size]={1,2,3,4,5,6};
    int value;


cout<<"Enter a value: ";
cin>>value;


 deletelement(arr,size,value);

 
}


