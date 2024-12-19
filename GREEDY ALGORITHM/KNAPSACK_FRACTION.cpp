#include <iostream>

using namespace std;

struct Item{
    int value;
    int weight;


    void showDetails(){
    cout<<"{"<<"{"<<value<<","<<weight<<"}"<<"}"<<" ";
}
};

Item item[4];
int w;
/////////////////////////////////BUBBLE SORTING////////////////////////////////////////////////////////////
void compare(){
    for(int i=0;i<4-1;i++){
        for(int j=0;j<4-i-1;j++){
            if(item[j].value>item[j+1].value){
                int temp=item[j].value;
                int temp1=item[j].weight;
                item[j].value=item[j+1].value;
                item[j].weight=item[j+1].weight;
                item[j+1].value=temp;
                item[j+1].weight=temp1;
            }
        }
    }
    for(int i=0;i<4;i++){
        item[i].showDetails();
    }
}
//////////////////////////////KNAPSACK FRACTION/////////////////////////////////////////////
void Knapsack_Fraction(){
    
    int sum=0;;
    for(int i=0;i<4;i++){
     if(item[i].weight<=w){
       w=w-item[i].weight;
       sum=sum+item[i].value;

     }else if(item[i].weight>w){
        w=(item[i].value/item[i].weight)*w;
        sum=sum+w;
     }
     
    }
   cout<<"Sum of Value is: "<<sum<<endl; 
}
int main(){
for(int j=0;j<4;j++){                             
    cin>>item[j].value>>item[j].weight;            
}

for(int j=0;j<4;j++){
    item[j].showDetails();
}
cout<<endl;
//////////////////////////COMPARING////////////////////
compare();
cout<<endl;
cout<<"Enter Weight: ";
cin>>w;
cout<<endl;

Knapsack_Fraction();

}