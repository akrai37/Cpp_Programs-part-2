#include<iostream>
#include<cstdlib>
using namespace std;

class Person{
string *name;
int age;
public:
    Person(string name,int age){
    this->name=new string(name);
    this->age=age;
    }

    Person(const Person &p){//since , we are using "const" keyword in copy constructor, the value will be always constant when passed .
    name=new string(*p.name);//"p.name" alone will contain the address of the of the name . REMEMBER , "name" is a pointer ,so we have to use "*" to call the value ,since we dont need address.
    //"*" is basically used for "name" and nor for "p".REMEMBER that.
    age=p.age;//here we dont need "*" to get the value. Normal call will call the value which is the standard way.
    // since "age" is not a pointer, we dont have to use * to call the value.
    }
    void namechange(string name,int age){
    *(this->name)=name;//we are using "*" because name is a pointer in order to call the value and not the address.
    this->age=age;
    }

    void display(){
    cout<<"my name is "<<*name<<" and my age is "<<age<<endl;
    }
};

int main(){
Person raj("raj",25);
raj.display();

Person rajduplicate=raj;
rajduplicate.display();

raj.namechange("raj sinha",100);
raj.display();
rajduplicate.display();//

return 0;//copy constructor will help to call the previous values that were passed through one of class's object .
//when  we will create a duplicate object, it will contain the previous values and not the current value even if it is the duplicate object.there will be no updation in duplicate object values.
}


