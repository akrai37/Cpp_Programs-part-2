#include<iostream>
#include<cstdlib>
using namespace std;

void test() throw(int,char,runtime_error){//this is the format if the function is gonna throw an exception

throw 'c';

};

int main(){

try{

test();//"try" block has a function instead of "throw". The function will contain the "throw" keyword.

}
catch(int error){
cout<<"int type error :"<<endl<<error;
}
catch(char e){
cout<<"character error :"<<endl<<e;
}
catch(runtime_error err){
cout<<"runtime_error :"<<endl<<err.what();
}
return 0;
}

