#include<iostream>

using namespace std;
////////////////////////BACKWARD INSERT ELEMENT////////////////////////////////////////////////////
void insertElement(int narr[],int nsize, int nposition,int nvalue){
//int narr[nsize];
int ncount=0;
for(int i=0;i<nsize;i++){
    if(narr[i]!=NULL){
        ncount++;

    }
}
cout<<ncount<<endl;
for(int i=ncount;i>nposition;i--){
    
        narr[i]=narr[i-1];
    
}
cout<<endl;
narr[nposition]=nvalue;

for(int i=0;i<=ncount;i++){
    cout<<narr[i]<<"\t";
}

}






int main(){
    int size=10;
    int arr[size]={1,2,3,4,5,6};
    int size1= sizeof(arr)/sizeof(arr[0]);
    int position,value;

cout<<"Enter a position: ";
cin>>position;
cout<<"Enter a value: ";
cin>>value;

insertElement(arr, size, position,value);

 

 
}


