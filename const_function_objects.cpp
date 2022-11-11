#include<iostream>
using namespace std;
class Test{
    int num1,num2;
    int const num3=5;
    public:
    Test(int a,int b){
        num1=a;
        num2=b;
       

    }
    int Check() const{
        int c;
        cout<<"called const function";
      // num1++; give error because it is a const function.
       c=num1+num2;
       cout<<"the sum of num1 + num2 is"<<c<<endl;
       
       
       //const function can be called by non connst objects also but const objects can only call const functions.
    }
    void Demo(){
        cout<<"called non const function";
        num1++;
       // num3++; give error as it is constant
        cout<<"num1 can be changed in this DEMO function and num1 is "<<num1<<endl;
         cout<<"num2 is "<<num2<<endl;
        cout<<"num2 is after ++num2="<<++num2<<endl;
        cout<<"num2 afer num2++="<<num2++<<endl;
        cout<<"num2 is "<<num2<<endl;
    }


};
int main(){
    int num1,num2;
    cout<<"enter the value of num1 and num2 and num3"<<endl;;
    cin>>num1>>num2;
 const Test a(num1,num2);
 Test b(num1,num2);
 a.Check();
 b.Check();
 b.Demo();
 //a.Demo(); give error
}