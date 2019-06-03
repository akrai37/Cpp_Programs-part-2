
#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

class Human{
public:
    Human(){
        cout<<"constructor is called"<<endl;
    }
    ~Human(){
        cout<<"destructor is called"<<endl;
    }
};

int main(){

Human rain;

delete rain;

return 0;
}


