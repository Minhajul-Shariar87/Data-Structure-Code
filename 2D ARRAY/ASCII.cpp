#include<iostream>
#include<string.h>

using namespace std;
string encode(string s, int j){
    for(int i=j;i<s.length();i=i+j+1){
        s[i]=s[i]+2;
    }
    return s;
}
int main(){
    string s;
    int j;
    cout<<"Enter String"<<endl;
    getline(cin>>ws,s);
    cout<<"Enter Value of J: ";
    cin>>j;

    cout<<"Original String: "<<s<<endl;
     cout<<"Encoded String: "<<encode(s,j)<<endl;;
}