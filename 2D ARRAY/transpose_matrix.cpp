#include<bits/stdc++.h>

using namespace std;

int main(){
    int m,n;
    cout<<"Enter the numbr of Rows: ";
    cin>>m;

    cout<<"Enter the number of Colomn: ";
    cin>>n;

    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
           cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }

 
}