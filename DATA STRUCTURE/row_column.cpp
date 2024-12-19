#include<iostream>

using namespace std;

int  main(){
    int m,n;

    cout<<"Enter the size of m: ";
    cin>>m;
    cout<<"Enter the size of n: ";
    cin>>n;

    int arr[m][n];
   int k=0;
    for(int i=0;i<m;i++){
        for(int z=0;z<n;z++){
            arr[i][z]= ++k;
        }
    }

     for(int i=0;i<m;i++){
        for(int z=0;z<n;z++){
            cout<<arr[i][z]<<"\t";
        }
        cout<<endl;
    }
}
