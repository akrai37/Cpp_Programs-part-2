#include<iostream>
#include<cstdlib>
using namespace std;

int main(){

try{

try{

    throw("a character exception");//it is string but it is considered as character in exception and should also have const keyword
    }

    catch(const char *e){
    cout<<"inner catch block :"<<e<<endl;
    cout<<"rethrowing the exception"<<endl;
    throw runtime_error ("rethrowing the error of type runtime_error");
};
}
catch(int e){
cout<<"outer catch block :"<<e;
}
catch(...){
cout<<"unknown exception ";//<<e;cannot use it because we dont know the type of object
};
return 0;
}
