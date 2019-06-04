#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

class Human{
private:
    string name;
    int age;

public:
    Human(string iname,int iage){
        name=iname;
        age=iage;
    }
    void show(){
        cout<<"class values "<<name<<" " <<age<<endl;
    }
 friend void display(Human man);

} ;

void display(Human man){
    cout<<man.name<<endl<<man.age<<endl;//it is using the members of the friend class that are name and age and attaching it to the object.
    //Since it is the FRIEND of that class it can access the values of that class even if they are private.
};

int main(){

Human ramesh("ramesh",22);
ramesh.show();
display(ramesh);

return 0;
}
