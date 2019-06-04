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
    };

};

class Student : public Person{
public:
    void display(){
        cout<<name<<endl;
    };
};

int main(){
    Student aman;
    aman.setname("aman");
    aman.display();;

    //below is some experiment,dont focus much
    string ba="ba",basurname="sheep";
    string whole;
    whole=ba+" "+basurname;
    cout<<whole<<endl;

 return 0;
}
