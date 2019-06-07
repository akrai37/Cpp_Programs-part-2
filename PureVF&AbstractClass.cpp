
#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

class Person{
public:
    virtual void introduce()=0;//it is pure virtual function. we just have to prototype the fn and then make i equal to zero as done here.
};

void Person :: introduce(){
cout<<"the pure function can also be defined but its not of much use since the fn is made PURE to make sure that the identical fn is defined in the derived class. We also cant call it from basevclass's own object because it has become an abstract class and abstract classes cannot have their objects"<<endl;
};

class Student : public Person{
public:
    void introduce(){//if we dont have this method defined here, then it will show error instead of calling the base class identical fn because this fn has been defined as PURE fn in the base class.
    cout<<"this is the method of class Student "<<endl;
    };
};


int main(){
Student aman;
aman.introduce();

//Person anjali;//this is not possible because the class Person has become an ABSTRACT class . an abstract class is the one which has one or ore PURE functions declared in it.

return 0;//a function
}


