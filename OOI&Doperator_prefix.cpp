#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

class Marks{
    int mark;
public:
    Marks(){
        mark=0;
    };
    Marks(int m){
        mark=m;
    }

    void display(){
        cout<<"your mark is "<<mark<<endl;
    }

    void operator++(){//we can also use the "Mark"(class) datatype if we want to return the value since void doesnt return any value.
      mark+=1;
    };

    friend void operator--(Marks &mk);
};

 void operator--(Marks &mk){
    mk.mark-=1;
 };

int main(){

Marks aman(39);
aman.display();

++aman;
aman.display();

--aman;
aman.display();
}
