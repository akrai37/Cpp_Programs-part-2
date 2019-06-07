#include<iostream>
#include<cstdlib>

using namespace std;

class Animal{
public :
    Animal(){
    cout<<"animal constructor"<<endl;
    }
void breed(){
cout<<"this is breed"<<endl;
}
};


class Tiger : virtual public Animal{//making the inheritance virtual
public :
    Tiger(){
    cout<<"tiger constructor"<<endl;
    }

};

class Lion : virtual public Animal{//making the inheritance virtual
public :
    Lion(){
    cout<<"lion constructor"<<endl;
    }


};
class Liger : public Tiger, public Lion{//since the classes "Tiger" and "Lion" are inheriting from the same base class "Animal", when one of the base class fn is called() using the object of the derived-derived class(here liger class),
    //it will call function without getting confused because of virtual inheritance.
public :
    Liger(){
    cout<<"liger constructor"<<endl;
    }

};

int main(){

 Liger anuj;
 anuj.breed();


return 0;
}





