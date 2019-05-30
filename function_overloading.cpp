#include<iostream>
#include<cstdlib>
#include<string>

using namespace std;

void  display();
int display(string);

int main(){

    display();
    display("anil");

    return 0;

}

void display(){

    cout<<"function without any parameter :"<<endl;

};

int display(string name){

     cout<<"fn with one parameter "<<endl<< name <<endl;

     return 1;
};
