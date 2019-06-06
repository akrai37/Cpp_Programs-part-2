#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

class Father{
public:
    int height;

    void askfather(){
        cout<<"ask me a question kid, cause i am your father"<<endl;
    }
};

class Mother{
public:
    string color;

    void askmother(){
        cout<<"ask me a question kid, cause i am your father"<<endl;
    };
};
class Child : public Father, public Mother{
public:
   void askparents(){
    cout<<"i am asking my parents"<<endl;
   }

   void childdet(string icolor,int iheight){
    height=iheight;
    color=icolor;
   }

   void display(){
    cout<<"my height is "<<height<<" and my color is "<<color<<endl;
   }
};

int main(){
Child kamal;
kamal.childdet("brown",178);
kamal.display();
kamal.askfather();
kamal.askmother();

return 0;
}
