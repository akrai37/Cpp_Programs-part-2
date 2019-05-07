#include<iostream>
#include<cstdlib>
using namespace std;

int main(){

 int *pointer=nullptr;

 pointer=new int;

 if(pointer!=nullptr){

    *pointer=10;//could have assigned the value at the initialization with "new" as you usually do.
    cout<<*pointer<<endl;
    delete pointer;
    pointer=nullptr;//
 }
 else{
    cout<<"memory not allocated"<<endl;
 }

return 0;
}
