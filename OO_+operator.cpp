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
        temp.intmarks= intmarks + m.intmarks;//adding the internal marks of both constructor
        temp.extmarks= extmarks + m.extmarks;//adding the external marks of both constructor

        return temp;
    }
};
int main(){

Marks m1(10,32),m2(23,64);//two constructors with their parameters.
Marks m3= m1 + m2;//operator overloading. The "+" operator will call the operator of the class with "m1" values as the base values. So, its arguments will go into the intmarks and extmarks.
//afterthat, the arguments of "m2" will be passed to the scope of operator fn and will be represented as  m.intmarks; and then , the values will be added  and the sum will be stored in the local variable temp.intmarks; .similar procedure for extmarks.
m3.display();

return 0;
}
