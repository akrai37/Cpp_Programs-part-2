#include<iostream>
#include<cstdlib>

using namespace std;

class Marks{
int mark;
public:
    Marks(){
    mark=0;
    }

    Marks(int m){
    mark=m;
    }

    void display(){
     cout<<"my marks is "<<mark<<endl;
    }

    Marks *operator->(){//arrow operator is also a unary object , so it will take only one parameter and since it is a member function of th eclass , that value will be passed implicitly.
    return this;//"this" keyword is referring to the current object.
    }
};

int main(){
Marks karan(76);
karan.display();
karan->display();
return 0;//we cannot use friend fn for special  operators.
}
