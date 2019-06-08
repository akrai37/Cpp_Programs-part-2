#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

class Marks{
private:
    int intmarks;
    int extmarks;
public:
    Marks(){
        intmarks=0;
        extmarks=0;
    };

    Marks(int i,int e){
    intmarks=i;
    extmarks=e;
    };

    void display(){
        cout<<intmarks<<endl<<extmarks<<endl;
    };

    Marks operator+(Marks m){
        Marks temp;
        temp.intmarks= intmarks + m.intmarks;
        temp.extmarks= extmarks + m.extmarks;

        return temp;
    }
    Marks operator-(Marks m);//declaring the operator fn inside the class.
};


Marks Marks :: operator-(Marks m){//the "-" operator fn is defined outside the class using scope resolution. "Marks Marks ::" , first one tells the datatype of the fn and the other one is the class name. nothing different
    Marks temp;
    temp.intmarks = intmarks - m.intmarks;
    temp.extmarks = extmarks - m.extmarks;

    return temp;
};

int main(){

Marks m1(10,32),m2(23,64);
Marks m3= m1 + m2;;//operator overloading. The "+" operator will call the operator of the class with "m1" values as the base values. So, its arguments will go into the intmarks and extmarks.
//afterthat, the arguments of "m2" will be passed to the scope of operator fn and will be represented as  m.intmarks; . and then , the values will be added.

m3.display();

Marks m4= m1 - m2;;//operator overloading. The "-" operator will call the operator of the class with "m1" values as the base values. So, its arguments will go into the intmarks and extmarks.
//afterthat, the arguments of "m2" will be passed to the scope of operator fn and will be represented as  m.intmarks;   and then , the values will be subtractedand the total value will be stored in the local variable temp.intmarks; . similar procedure for extmarks.

m4.display();

return 0;
}

