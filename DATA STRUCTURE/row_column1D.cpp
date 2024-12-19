#include<iostream>

using namespace std;

int  main(){
    int m,n;

    cout<<"Enter the size of m: ";
    cin>>m;
    cout<<"Enter the size of n: ";
    cin>>n;
    
    int k=0;
    int l=m*n;
    int arr[l];
    
    for(int i=0;i<m;i++){
       
       for(int j=0;j<n;j++){
         arr[n*i+j]= ++k;
       } 
    }

     for(int i=0;i<l;i++){
      arr[i]= ++k; 

    }
     
    
}
