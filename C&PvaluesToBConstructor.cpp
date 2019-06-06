#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

class Father{
protected:
    int height;
public:
    Father(int iheight){
        cout<<"constructor of father is called"<<endl;
        height=iheight;
        cout<<height<<endl;
    }
};

class Mother{
protected:
    string color;
public:
    Mother(string icolor){
        cout<<"constructor of mother is called"<<endl;
        color=icolor;
        cout<<color<<endl;
    };
};
class Child : public Father, public Mother{
public:
    Child(int childheight,string cname) : Father(childheight),Mother(cname){ //its just we have to pass the values to the constructor of base class through derived class.

        cout<<"child constructor is called"<<endl;
    };

   void display(){
    cout<<"my height is "<<height<<" and my color is "<<color<<endl;
   };
};

int main(){
Child kamal(178,"black");
kamal.display();

return 0;
}

