#include<iostream>

using namespace std;
int main(){
    int array_1[]={10,20,30,40,50};
    int array_2[]={1,2,3,4,5,6,7,8};


    int size1= sizeof(array_1)/sizeof(array_1[0]);
    int size2=sizeof(array_2)/sizeof(array_2[0]);
    int size3=size1+size2; 
    cout<<size3<<endl;
    int array_3[size3];
    for(int i=0;i<size1;i++){
        array_3[i]=array_1[i];
    }
    for(int i=0;i<size2;i++){
        array_3[i+(size1)]=array_2[i];


    }
    for(int i=0;i<size3;i++){
        cout<<array_3[i]<<"\t";
        

    }
    cout<<endl;
    for(int i=size3-1;i>=0;i--){
        cout<<array_3[i]<<"\t";
        

    }
    
    
    
    
    
    
    

}