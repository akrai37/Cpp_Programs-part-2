#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

class Marks{
private:
    int marks;
public:
    Marks(){
       marks=0;
    };

    Marks(int ma){
       marks=ma;
    };

    void display(){
      cout<<"my marks is "<<marks<<endl;
    }

    void operator+=(int bonusmark){//since we are not expecting any return value , we can use the datatype of operator as "void" and datatype of argument as "int" as per our requirement .
     marks= marks+ bonusmark;//we are adding the "bonusmark" into the "marks" variable value
    }//it is a member operator fn , thats why the argument will be passed implicitly(we can use the "marks" variable to make changes in it directly without using any temporary variable )

     friend void operator-=(Marks &obj,int bonusmark);//it is a friend fn , not a member fn.
     //the value wont be passed implicitly.thats why we will need two objects. one to store the result of calculation and the other to store the calling value(int bonusmarks).

};

void operator-=(Marks &obj,int passmark){//

obj.marks-= passmark;

}

int main(){

Marks m(49);
m.display();

m += 20;
m.display();

m -= 20;
m.display();

return 0;
}


