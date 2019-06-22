#include<iostream>
#include<cstdlib>
using namespace std;

int main(){

try{

throw 20;

}
catch(int error){
cout<<"int type error :"<<endl<<error;
}
catch(...){
cout<<"some exception occured but we don't know the type"<<endl;
}
return 0;//we have multiple catch block statements and the "catch" with the correct datatype of recieving object will be executed.
//In case if the "catch" with the correct datatype doesnt exist ,"catch" with (...) datatype will be called.
}
