#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

class Human{
private:

    int age;
    string name;
public:

    Human(){
        cout<<"constructor without any parameters"<<endl;
        name="noname";
        age=0;
    }
     Human(string iname){
        cout<<"constructor with string parameter"<<endl;
        name=iname;
        age=0;
    }
     Human(int iage){
        cout<<"constructor with age parameter"<<endl;
        name="noname";
        age=iage;
    }
     Human(string iname,int iage){
        cout<<"constructor with string and age parameters"<<endl;
        name=iname;
        age=iage;
    }
    void display(){
        cout<<"display all the values"<<endl;
        cout<<name<<endl;
        cout<<age<<endl;
    }
};

int main(){

Human prakash;
prakash.display();

Human sonu("sonu");
sonu.display();

Human vir(45);
vir.display();

Human bodh("bodh",38);
bodh.display();

return 0;
}


