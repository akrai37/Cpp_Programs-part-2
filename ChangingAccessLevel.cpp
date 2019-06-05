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

class Student : private Person{
public:

    Person :: name;
    Person :: setname;

    void display(){
        cout<<name<<endl;//we are indirectly accessing the private member of the base class.
    };

    void setstudent(string sname){
        setname(sname);
    };
};

int main(){

Student aman;
aman.name="asdf";
aman.setname("aman");//will overwrite the initial value "asdf". We didnt need the indirect method to assign the value to the "name" variable in "setname" function
aman.display();

return 0;
}



