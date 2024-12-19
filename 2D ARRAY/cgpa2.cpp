#include<iostream>

using namespace std;
 struct Student{
        string id;
        int credits;
        float CGPA;
        void show(){
            cout<<"-------------------NEW----------------------------------------"<<endl;
            cout<<"Id is: "<<id<<endl;
            cout<<"Credits Completed is: "<<credits<<endl;
            cout<<"CGPA is "<<CGPA<<endl;
            cout<<"-----------------------------------------------------------"<<endl;
            
        }
        void compare(){
            if(CGPA>=3.75&&credits>50){
            cout<<"-----------------------CGPA------------------------------------"<<endl;
            cout<<"Id is: "<<id<<endl;
            cout<<"Credits Completed is: "<<credits<<endl;
            cout<<"CGPA is "<<CGPA<<endl;
            cout<<"-----------------------------------------------------------"<<endl;
            }
        }
        
         void creditscompare(){
            if(credits>50){
            cout<<"-----------------------CREDIT------------------------------------"<<endl;
            cout<<"Id is: "<<id<<endl;
            cout<<"Credits Completed is: "<<credits<<endl;
            cout<<"CGPA is "<<CGPA<<endl;
            cout<<"-----------------------------------------------------------"<<endl;
            }
        }
    };
int main(){
Student s[5];
for(int i=0;i<5;i++){
    cin>>s[i].id>>s[i].credits>>s[i].CGPA;
    

}
for(int i=0;i<5;i++){
    s[i].show();
}
for(int i=0;i<5;i++){
    s[i].creditscompare();
}
for(int i=0;i<5;i++){
    s[i].compare();
}
}