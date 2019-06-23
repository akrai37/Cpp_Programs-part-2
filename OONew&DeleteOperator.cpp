#include<iostream>
#include<cstdlib>
#include<stdexcept>
using namespace std;

class Student{
string name;
int age;
public:
    Student(){
    name="noname";
    age=0;
    }
    Student(string name,int age){
    this->name=name;
    this->age=age;
    }
    void whoareyou(){
    cout<<"my name is :"<<name<<" and my age is :"<<age<<endl;
    }

    void *operator new(size_t size){//"size_t" is the datatype of "size"."size" contains the number of bytes that we want to allocate.
    void *pointer;
    cout<<"overloading new operator. Size is :"<<size<<endl;
    pointer=malloc(size);//malloc is allocating the address of "size" variable to the pointer .
    if(!pointer){//if address is not allocated properly in the pointer , then bad_alloc exception will be thrown.
        bad_alloc ba;
        throw ba;
     }
     return pointer;//how void is returning a value?? find.
    }

    void operator delete(void *pointer){
    cout<<"overloaded delete"<<endl;
    free(pointer);
    }
};

int main(){
Student *rajptr;
try{
rajptr=new Student("raj",24);//new will call the "new operator" in Student class if it is present. if "new operator" has exception , it will be thrown to the "catch" block with an object
rajptr->whoareyou();
delete rajptr;//delete will call the delete operator present in the class which has the object "rajptr".it will just delete the object.
}
catch(bad_alloc ba){
cout<<ba.what()<<endl;//what() is just the method of bad_alloc
}
return 0;//overloading new and delete operator is similar to other operator overloading . When the keyword of that operator is used , operator fn will be called
}




