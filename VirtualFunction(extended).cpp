#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

class Person{
public:
    virtual void introduce(){//virtual keyword will allow this function to be overridden if the same name function is present in the derived class
    cout<<"this is the method of class person"<<endl;
    };
};

class Student : public Person{
public:
    void introduce(){
    cout<<"this is the method of class student "<<endl;
    };
};

class Graduate : public Student{
public:
    /*void introduce(){
    cout<<"this is the method of class Graduate"<<endl;
    };*/
};

void classify(Person &p){
p.introduce();
};

int main(){

Person aman;
Student anjali;
Graduate anil;

classify(aman);
classify(anjali);
classify(anil);

return 0;
}


