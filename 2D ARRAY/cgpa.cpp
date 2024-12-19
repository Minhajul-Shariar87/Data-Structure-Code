#include<iostream>

using namespace std;
 struct Student{
        string id;
        int credits;
        float CGPA;
        void show(){
            cout<<"Id is: "<<id<<endl;
            cout<<"Credits Completed is: "<<credits<<endl;
            cout<<"CGPA is "<<CGPA<<endl;
            compare();
        }
        void compare(){
            if(CGPA>=3.75){
                  cout<<"Id is: "<<id<<endl;
            cout<<"Credits Completed is: "<<credits<<endl;
            cout<<"CGPA is "<<CGPA<<endl;
            }
        }
    };
int main(){
Student s1,s2,s3;
s1.id="23-54144-3";
s1.credits=10;
s1.CGPA=3.75;
s1.show();
s2.id="23-54145-3";
s2.credits=13;
s2.CGPA=3.73;
s2.show();

s3.id="23-54146-3";
s3.credits=19;
s3.CGPA=3.79;
s2.show();
}