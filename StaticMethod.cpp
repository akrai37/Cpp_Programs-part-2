#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

void display();//prototyping

class Human{
public:
    static int human_count;//declaring the static variable

    Human(){
        human_count;
    }
    void total(){
        cout<<"there are "<< ++human_count<<" people(s)"<<endl;
    }

    static void humanMember(){
        cout<<"total no. of humans "<<human_count<<endl;//static members can only use static variables.it is shared by all the objects.
        //and  thatswhy there are continuous updation
    }

};
int Human::human_count=0;//we have to declare the value of static variable outside the class

int main(){

    Human preeti;
    preeti.total();
    Human sid;
    sid.total();
    Human pratap;
    pratap.total();
    Human::humanMember();


    display();
    display();
    display();
    display();

return 0;
}

void display(){

static int counter=0;

cout<<"display is called "<<++counter<<" times"<<endl;

};




