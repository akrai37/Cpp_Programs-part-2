#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

class Human{

public:
string name;

int space(){

cout<<"this is class function"<<endl;

}

};

int main(){

Human john; //it is the object of class. This is used to access members and variables in the main fn or any other fn
john.name="john";
cout<<john.name<<endl;
john.space();

Human *bunty= new Human();//here , *bunty is the pointer of human. it is used to refer many memory locations of the class human.
bunty->name="bunty";//so, object bunty of "human" class is referring to the memory location containing the name "bunty"
cout<<bunty->name<<endl;
bunty->space();

return 0;

}

