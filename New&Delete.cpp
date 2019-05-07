#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

int main(){

int *pointer;
string *name;

pointer = new int(24);//this pointer variable is referring to the memory location whose memory ADDRESS is not stored in this. it means
//memory location is assigned DYNAMICALLY withoust giving it the SPECIFIC variable name.

name= new string("anushka");

cout<<pointer<<endl;
cout<<*pointer<<endl;
cout<<*name<<endl;

delete pointer;
cout<<*pointer<<endl;//it shoud not print the value but it is doing bacause of some undefined results.

return 0;
}
