#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

class Person{
public:
    Person(){
        cout<<"constructor is called"<<endl;
    }
    ~Person(){
        cout<<"destructor is called"<<endl;
    }
};
class Student : public Person{
public:
    Student(){
        cout<<"derived class constructor is called"<<endl;
    }
    ~Student(){
        cout<<"derived class destructor is called"<<endl;
    };
};
int main(){

Student aman;

return 0;
}
