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
    cout<<"this is my marks "<<mark<<endl;
    }

    int operator()(int m){//could have also used class-name.
    mark= m;
    cout<<"call operator is called "<<endl;
    return mark;//returning a value where it is called .
    };

};

int main (){
Marks aman(45);//dont confuse with line 29 and 32 . line 29 is an object of class returning a value to the constructor whereas line 32 is returning a value to the operator fn.
aman.display();

aman(49);
aman.display();

return 0;//we cannot use friend fn for special  operators.
}
