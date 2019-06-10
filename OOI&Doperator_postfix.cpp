#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

class Marks{
private:

public:
    int mark;
    Marks(){
        mark=0;
    };
    Marks(int m){
        mark=m;
    }

    void display(){
        cout<<"your mark is "<<mark<<endl;
    }

    Marks operator++(int){//int in the scope specifies that it is the postfix operation.
      Marks duplicate(*this);
      mark+=1;
      return duplicate;
    };

    friend Marks operator--(Marks &mk,int);//since it is a friend function of the class, the value wont be passed implicitly(automatically)
};

 Marks operator--(Marks &mk,int){
    Marks duplicate(mk);
    mk.mark-=1;
    return duplicate;
 };

int main(){

Marks aman(39);
aman.display();

(aman++).display();//we can write them together since the datatype of operator is user defined
aman.display();

(aman--).display();
aman.display();

return 0;
}
