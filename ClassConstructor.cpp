#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

class Human{

private://it is used when we dont want to share the data or the working of data to all the users.
    string name;
    int age;

public:
    Human()//it is a contructor. it will be called AUTOMATICALLY when class's object is created in the main function and all its statements and methods will be executed automatically.
    {       //it is mainly used to store default values , methods that we want to always execute  when class's object is called.
        name="anil";
        age=54;
        cout<<"it is a constructor of class human"<<endl;
         cout<<age<<endl;
        cout<<name<<endl;
    };
    void display(){
        cout<<age<<endl;
        cout<<name<<endl;

    };

};

int main(){

    Human anil;
    anil.display();

return 0;
}

