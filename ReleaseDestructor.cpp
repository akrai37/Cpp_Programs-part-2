#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

class Human{
private:
    string *name;
    int *age;

public:
    Human(string iname,int iage){
        name=new string;
        age=new int;

        *name=iname;
        *age=iage;
    }

    void display(){
    cout<<"hi my name is "<<*name<<" and i am "<< *age << " years old"<<endl;
    }

    ~Human(){
        cout<<"destructor is called"<<endl;
        delete name;
        delete age;
    }
};


int main(){

Human *prakash;
prakash= new Human("prakash",25);//thats the way through which we can pass values to the constructor if the object of the class is pointer
prakash->display();
delete prakash;


return 0;
}



