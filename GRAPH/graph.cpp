#include<iostream>

using namespace std;

int main(){

int vertex;
cout<<"Enter the vertex number: ";
cin>>vertex;

int adjMatrix[vertex][vertex];

for(int i=0;i<vertex;i++){
    for(int j=0;j<vertex;j++){
        adjMatrix[i][j]=0;
    }

}
int edgeNumber, u,v;
cout<<"Enter edge number: ";
cin>>edgeNumber;

for(int e=1;e<=edgeNumber;e++){
   cin>>u>>v;
   adjMatrix[u][v]=1;
}

for(int i=0;i<vertex;i++){
    for(int j=0;j<vertex;j++){
        cout<<adjMatrix[i][j]<<"\t";
    }
    cout<<endl;
}



}