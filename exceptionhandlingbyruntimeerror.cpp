#include<iostream>
#include<cstdlib>
#include<stdexcept>//mandatory if there is "runtime_error" exception.
using namespace std;

int main(){

int a=23,b=0,c;

try{
    if(b==0)
    throw runtime_error("throw keyword");//"runtime_error" is passing the object to "catch" of type "runtime_error".in previous ex, the type was of "const char ".
    c=a/b;
    cout<<c<<endl;
}
    catch( runtime_error &e){//we are using "&e" to pass the value by reference. we can also use normal "e".
    cout<<"exceptional error "<<endl<<e.what();//what is just the method to call the object.
    }

return 0;
}
