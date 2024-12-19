#include<iostream>

using namespace std;

int main(){
    int array_1[]={1,4,6,3,6,9};
    int array_2[]={5,3,7,1,2,6};
     
    int size1=sizeof(array_1)/sizeof(array_1[0]);
    int size2=sizeof(array_2)/sizeof(array_2[0]);
     
     int common[size2];
     int c=0;
    
     for(int i=0;i<size1;i++){
 bool flag =false;
 int commonc=0;
        for(int j=0;j<size2;j++){
          
            if(array_1[i]==array_2[j]){
              for(int k=0;k<=c;k++){
                if(array_1[i]==common[k]){
                  ++commonc;
                    flag=true;
                }
              } 
              if(!flag){
                common[c]=array_1[i];
                cout<<common[c]<<"\t";
                c++;

              }

            }
        }
        cout<<"Common is: "<<commonc<<endl;
      
     }
     cout<<endl;
           if(c==0){
            cout<<"No Unique Number"<<endl;
        }
        else if(c>0){
            cout<<"Unique number found"<<endl;
        }
    
    



        
    }
