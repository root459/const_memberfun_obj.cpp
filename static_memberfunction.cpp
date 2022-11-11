// repeat program 1 to implement static member function
// statci data member create aaclas s student with student id and name 
// pulbic member fun to get values and display values and also count no of
//  astudents in a class ;
#include<iostream>
using namespace std;
class Student{
    int id;
    string name;
    static int count;
    public:
   
    void getValue(){
        cout<<"enter the studet name and id";
        cin>>name>>id;
        
    }
    void display(){
        cout<<"the name and id of the students are";
        cout<<name<<endl<<id;
        count++;

    }
    static void studentnumber(){
        cout<<endl<<"the numver of the stuent are "<<count;
    }};
    int Student::count=0;//static cata member initialized by 0 by defulat
    
    int main(){
        Student s[5];
       // cout<<"enter the ddata for the students";
        for(int i=0;i<5;i++){
            s[i].getValue();

        }

        for(int i=0;i<5;i++){
            s[i].display();
        }
       s[1].studentnumber();
        Student::studentnumber();//static fn can be callled using object as well as without object
        
    }
    


