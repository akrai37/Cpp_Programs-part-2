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

Human john; //it is the object of class.This is used to access members and variables in the main fn or any other fn

john.name="john";
cout<<john.name<<endl;

john.space();

Human eliza; //it is the 2nd object of class. we can create any no. of objects of a single class.

eliza.name="eliza";
eliza.space();

return 0;
}
