#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

class Person{
public:
    void introduce(){
    cout<<"this the method of person"<<endl;
    };
};

class Student : public Person{
public:
    void introduce(){
    cout<<"this the method of student "<<endl;
    };
};

void classify(Person p){
p.introduce();
};

int main(){
Student aman;
aman.introduce();
//aman.Person::introduce();//this is one way to call overridden method of the base class, that we learned in the previous program
classify(aman);//calling the method of base class in another function using the object of derived class which is passed as the argument.
}
