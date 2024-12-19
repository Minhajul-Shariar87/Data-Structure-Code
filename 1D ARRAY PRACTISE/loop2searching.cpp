#include<iostream>

using namespace std;

int main(){
    int array_1[]={8,4,6,1,6,9,6,1,9,8};
    int c=0;
    int count=0;
    int size = sizeof(array_1)/sizeof(array_1[0]);
    int doublen[size];
   for(int i=0;i<size;i++){
    bool flag =false;
    for(int j=0;j<size;j++){
        int sum=0;
        
        if(array_1[i]==array_1[j]){
            for(int k=0;k<=c;k++){
                if(array_1[i]==doublen[k]){
                  sum=sum+1;
                    // cout<<doublen[k]<<"\t";
                    flag=true;
                    cout<<doublen[k]<<"is "<<sum<<" times"<<endl;

                }
                
                
            }
            
            
            if(!flag){
                doublen[c]=array_1[i];
                // cout<<doublen[c]<<"\t";
                c++;
            }
            break;
        }
    }
   }
   if(c>0){
    for(int i=0;i<c;i++){
        
    }
   }
   
}