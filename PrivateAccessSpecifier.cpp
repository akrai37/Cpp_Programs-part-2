#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

class Human{

private:
    string name;

    string getname(){
        return "subodh";
    }

public:
    void displayname(){
        cout<<name<<endl;
        cout<<getname()<<endl;
    };

    void setname(string a){
        name= a;
    };

};

int main(){

    Human anil;
    anil.setname("anil");
    anil.displayname();

return 0;

}

