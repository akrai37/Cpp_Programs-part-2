#include<iostream>
#include<cstdlib>
using namespace std;

void studentlist();

int main(){

studentlist();

return 0;

}

void studentlist(){

class Person{
public:
    string name;
    int age;

    void display(){
     cout<<name<<endl<<age<<endl;
    };
};

Person akash;
akash.name="akash";
akash.age=24;
akash.display();

}
