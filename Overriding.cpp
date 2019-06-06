#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

class Person{
public:
    void introduce(int a){
    cout<<"this is the function of class Person"<<endl;
    };
};

class Student : public Person{
public:
    void introduce(int a){
    //Person::introduce(a);we can write it here also.explanation is below.it will call the fn of base class first(as it will be executed first)
    cout<<"this is the function of class Student"<<endl;
    Person::introduce(a);//this way , we can call the overridden function in the derived class.
    };

};

int main(){
Student raj;
raj.introduce(24);
//raj.Person::introduce();//through this method, we can call the overridden function of base class using object of derived class.

return 0;//object is also known as instance
}
