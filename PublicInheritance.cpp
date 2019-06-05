#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

class Person{

protected:
    string name;

public:
    void setname(string iname){
       name=iname;
    }
};

class Student : public Person{//public here means that derived class will only be able to access the public members of the base class, not protected and private members

public:
    void display(){
    cout<<name<<endl;
    }
};
class Stud : public Student{//this is the derived - derived class . Even this wont be able to access the protected member of the base class.

public:
    void closure(){
    cout<<"my name is "<<name<<endl;
    }
};

int main(){
    Student aman;
    //aman.name="aman";// it will show the error that name is protected .Here the logic is that the is value is assigned in the main fn which contradicts the properties of protected i.e can only be used in derived class.
    aman.setname("aman");
    aman.display();

    Stud john;
    //john.name="john";//it will show the error that name is protected

 return 0;//in public inheritance , all the public members of base class acts as public members of the derived class
 //and all the protected members of base class act as protected members of the derived class
}
