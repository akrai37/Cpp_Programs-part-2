#include<iostream>
#include<exception>//used for defining use-defined exception class
using namespace std;

class Overspeed : public exception{//it is the user defined exception class that will handle the exception
int speed;
public:
    const char *what(){
    cout<<"you are overspeeding \n you are in the car not in aeroplane"<<endl;
    };
    void inspeed(){
        cout<<"your car speed is "<<endl;
    }
    void getspeed(int speed){
    this->speed=speed;
    };
};

class Car{
int speed;
public:
    Car(){
        speed=0;
    cout<<"speed is: "<<speed<<endl;}

    void accelerate(){
        for(;;){

            speed+=10;
            cout<<"speed is :"<<speed<<endl;

            if(speed>=250){//if the speed is greater than or equal to 250, it will throw an exception.
                Overspeed sobj;//here we are creating the object of the exceptional class that will handle the exception.
                sobj.getspeed(speed);//just calling the fn of a exception class
                throw sobj;//if the above condition is satisfied ,exception will be thrown to catch.
            };
        };
};
};

int main(){
    Car raj;
    try{
    raj.accelerate();//it will call the accelerate() function of the class.
    }
    catch(Overspeed sobj){//here Overspeed is the USER DEFINED DATATYPE which is basically the class for handling exception and "s" is its object
    sobj.what();//calling the fn of exception class through its object that was passed through "throw".
    sobj.inspeed();//calling the fn of exception class its object that was passed through "throw".
}

return 0;
}

