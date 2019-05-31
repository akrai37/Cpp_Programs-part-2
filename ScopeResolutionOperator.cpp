#include<iostream>
#include<cstdlib>
#include<string>

using namespace std;

class Human{

public:
    string name;

    void space();

};

void Human::space(){

    cout<<"Scope Resolution Operator"<<endl;

};//we cannot define the variable outside the class, only methods

int main(){

    Human ronit;
    ronit.name="Ronit";

    cout<<ronit.name<<endl;

    ronit.space();

    return 0;
}
