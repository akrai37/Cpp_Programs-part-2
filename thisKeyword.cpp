#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

class Person{
private:
    int age;
public:
    void myage(int age)//age here is the local variable with the same name as that of another variable.
    {
      this->age=age;
    };
    void display(){
        cout<<"my age is "<<this->age<<endl;
    }
};

int main(){
Person raj;
raj.myage(23);
raj.display();

}
