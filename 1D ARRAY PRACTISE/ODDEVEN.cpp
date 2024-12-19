#include<iostream>

using namespace std;

int main(){
    int evencount=0;
    int oddcount=0;
    int n;
int arr[]={12,32,44,1,54,53,15,64,3,13};
int nlength= sizeof(arr)/sizeof(arr[0]);

for(int i=0;i<10;i++){
    if(arr[i]%2==0){
        evencount++;
    }else if(arr[i]%2!=0){
        oddcount++;
    }
}
cout<<"EVEN COUNT IS: "<<evencount<<endl;
cout<<"ODD COUNT IS: "<<oddcount<<endl;

}