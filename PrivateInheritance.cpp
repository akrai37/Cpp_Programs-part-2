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

class Student : private Person{//all the protected and the public members of the base class will act as private members of the derived class
public:
    void display(){
        cout<<name<<endl;//we are indirectly accessing the private member of the base class.
    };

    void setstudent(string sname){
        setname(sname);
    };
};

class Gstudent : public Student{
public:
    void gsetstud(string gname){
        setstudent(gname);
    };

} ;


int main(){

Gstudent vikas;
//vikas.name="vikas";//shows the error person name is protected.Here the logic is that the is value is assigned in the main fn which contradicts the properties of private i.e can only be used in base class.
      //and here, even the function is public but due to inheritance it will act as private member of the class. we can access them indirectly if we have to access them.(assigning values in public)
vikas.gsetstud("vikas");
vikas.display();

//Student vijay;
//vijay.setname("vijay");//shows the error inaccessible

return 0;//Private member inheritance will follow the properties of private access specifier.There  are two things:-
//access specifier(defining the accessible properties of the class) and inheritance(defining the INHERITANCE properties of the class)
}



