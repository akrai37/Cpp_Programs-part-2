#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

class Person{
public:
    virtual void introduce(){//virtual keyword will allow this function to be overridden if the same name function is present in the derived class
    cout<<"this the method of class person"<<endl;
    };
};

class Student : public Person{
public:
    void introduce(){
    cout<<"this the method of class student "<<endl;
    };
};

class Farmer : public Person{
public:
    void introduce(){
    cout<<"this the method of class Farmer "<<endl;
    };
};

void classify(Person &p){
p.introduce();
};

int main(){

Student aman;
Farmer alex;

classify(aman);
classify(alex);


return 0;
}

