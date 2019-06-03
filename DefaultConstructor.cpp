#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

class Human{
private:
    int age;
    string name;
public:
    /*Human(){
        cout<<"default constructor"<<endl;
        name="noname";
        age=0;
    }*/
     /*Human(string iname,int iage=24){
        cout<<"default constructor"<<endl;
        name=iname;
        age=iage;
    }*/
     Human(string iname="rekha",int iage=24){
        cout<<"default constructor"<<endl;
        name=iname;
        age=iage;
    }
    void speak(){
        cout<<"overloading default constructor"<<endl;
        cout<<name<<endl<<age<<endl;
    }

};

int main(){

    Human rekha("roni");//we could write it without parameters also if values are declared during initialization in the constructor
    rekha.speak();

return 0;
}
