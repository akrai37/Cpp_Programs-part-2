#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

class Person{

public:
    string name;
    int age;
    void setname(string iname){name=iname; cout<<name<<endl;};
    void setage(int iage){age=iage; cout<<iage<<endl;};
};

class Student : public Person{

public:
    int id;
    void setid(int iid){id=iid;};

    void introduce(){
        cout<<"hi, i am "<<name<<" and i am "<<age<<" years old"<<endl;
    };

};

int main(){

    Student aman;
    aman.setname("aman");
    aman.setage(26);
    aman.setid(43532);
    aman.introduce();

return 0;
}
