#include<iostream>

using namespace std;

int main(){
    int array_1[]={8,4,6,1,6,9,6,1,9,8};
    int c;
    int count=0;
    int size = sizeof(array_1)/sizeof(array_1[0]);
    cout<<"Any number to search: ";
    cin>>c;
    for(int i=0;i<size;i++){
    if(array_1[i]==c){
        count++;
    }
    }
    cout<<"The number occurs "<<count<<" times in the array"<<endl;
}