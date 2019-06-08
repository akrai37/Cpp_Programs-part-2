#include<iostream>
#include<cstdlib>
using namespace std;

class Person{
public:
    string name;

    class Address{
    public:
        string country;
        string stname;
        int hno;
    };

    Address addr;

    void show(){
        cout<<name<<endl<<addr.country<<endl<<addr.stname<<endl<<addr.hno<<endl;

    };
};

int main(){

Person aman;
aman.name="aman";//we are just assigning the values and not passing them to any fn or something.
aman.addr.country="india";
aman.addr.stname="D. Nagar";
aman.addr.hno=342;

aman.show();

//Address ad;//it will show error because nested class object can only be declared in the class , and not in any other function
Person::Address ad; //we can declared the nested class object in the main fn using the object of class fn and scope resolution.

return 0;

}
