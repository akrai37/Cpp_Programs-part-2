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

class Student : protected Person{//all the protected and the public members of the base class will act as protected members of the derived class

public:
    void display(){
        cout<<name<<endl;
    };

    void call(){
        setname("aman");//we are indirectly accessing the protected member(which is actually a public member but due to inheritance it has become protected ) by calling it in the public access specifier.
    };
};



int main(){

    Student aman;
    //aman.setname("aman");//it will show the error that setname is inaccessible..Here the logic is that the is value is assigned in the main fn which contradicts the properties of protected i.e can only be used in derived class.
      //and here, even the function is public but due to inheritance it will act as protected member of the class. we can access them indirectly if we have to access them.
    aman.call();
    aman.display();


 return 0;//for simplicity, imagine all the members of base class are part of derived class(as if they are defined in the derived class)
 //and they have have there separate access specifier whether it is public,private or protected which depends upon INHERITANCE. Now it would be easy to know  if they are callable or not while calling them.
}


