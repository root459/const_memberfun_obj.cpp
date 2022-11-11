#include<iostream>
using namespace std;
class School{
    int id;
    string name;
    static int count;
    public:
    void getInfo(){
        cout<<"enter the name and id"<<endl;
        cin>>name>>id;
        count++;
    }
   static void showCount(){
        cout<<"the total numver of students in the school are"<<count<<endl;
        
    }
    void showDetails(){
        cout<<"the name and id are respectively"<<name<<id<<endl;

    }
};
int School::count=0;
int main(){
    School::showCount();//calling static member function without object
    School s;
    School d[5];
    s.getInfo();
    s.showCount();//calling static member function with object
    s.showDetails();
    for(int i=0;i<5;i++){
        cout<<"enter id and student name for student "<<i<<endl;
        d[i].getInfo();
        }
        for(int i=0;i<5;i++){
        d[i].showDetails();
        }
         School::showCount();
         s.showCount();
         d[3].showCount();
}

    


